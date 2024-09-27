import subprocess

def run_commands():
    cpp_path = r'C:\Users\User\Documents\Programming\C++\solution'
    txt_path = r'C:\Users\User\Documents\Programming\C++\solution\macro\txt'

    compile_command = f"g++ -o {cpp_path}\\main {cpp_path}\\main.cpp"
    run_command = f"{cpp_path}\\main.exe > {txt_path}\\output.txt"

    process = subprocess.Popen(compile_command, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    stdout, stderr = process.communicate()

    if process.returncode != 0:
        print("Compilation failed:")
        print(stderr.decode())
        return

    process = subprocess.Popen(run_command, shell=True)
    process.wait()

    if process.returncode != 0:
        print("Execution failed:")
        return

    with open(f"{txt_path}\\output.txt", "r") as file:
        output = file.read()
        print("Output of the program:")
        print(output)

if __name__ == "__main__":
    run_commands()