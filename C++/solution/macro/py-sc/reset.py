import shutil
import sys

def copy_file(file_choice):
    base_path = 'C:\\Users\\User\\Documents\\Programming\\C++\\solution\\'

    if file_choice == "1":
        source_path = base_path + 'macro\\macros\\template-main.cpp'
        destination_path = base_path + 'main.cpp'
    elif file_choice == "2":
        source_path = base_path + 'macro\\macros\\template-main2.cpp'
        destination_path = base_path + 'main.cpp'
    else:
        print("Invalid choice")
        return

    try:
        shutil.copyfile(source_path, destination_path)
        print(f"{destination_path} copied successfully")
    except Exception as e:
        print(f"An error occurred: {e}")

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python reset.py [1|2]")
        sys.exit(1)

    file_choice = sys.argv[1]
    copy_file(file_choice)