# 🏆 Competitive Programming Template 🖥️

Welcome to the **Competitive Programming Template** repository! 🚀

This project is designed to streamline your workflow for solving competitive programming problems. Whether you're practicing for platforms like **Codeforces**, **LeetCode**, **CodeChef**, or any other, this template will make it easier to manage code, reset templates, compile, and run your solutions in a fast and efficient way.

## ✨ Features

- **Template System**: Pre-configured templates (`template.cpp` and `template-main2.cpp`) help you quickly start coding without wasting time on boilerplate setup.
- **Batch Scripts**: Use simple batch scripts (`.bat` files) to reset code, compile, and run your solutions with a single command.
- **Python Automation**: Python scripts further automate the process of compiling and running C++ code, capturing output, and more.
- **VSCode Integration**: Comes with **VSCode** settings and tasks pre-configured, so you can focus on coding instead of setup.
- **Cross-Platform Setup**: While batch scripts are optimized for Windows, you can adapt the Python scripts to work on other systems as well.

---

## 📥 Downloading the Repository

Follow these steps to download and set up the repository on your local machine:

### 1. **Clone the Repository**
To get started, first download the project by cloning it from GitHub.

#### Using Git:
If you have Git installed on your system, open a terminal or command prompt and run the following commands:

```bash
git clone https://github.com/mammadlihamid/competitive-programming-template.git
cd competitive-programming-template
```

This will download the repository and place it in a folder named `competitive-programming-template` on your system.

#### Download ZIP:
Alternatively, you can download the repository as a ZIP file:
1. Navigate to the repository on GitHub.
2. Click the **Code** button.
3. Select **Download ZIP**.
4. Extract the ZIP file to a desired location on your system.

### 2. **Open the Project in VSCode**
Once the repository is downloaded, you can open it in **Visual Studio Code** (VSCode), which is recommended for this setup.

```bash
code .
```

This command will open the project in VSCode, assuming you have VSCode installed and the `code` command set up in your terminal.

---

## 📂 Project Structure

Here is a breakdown of the folder structure of the project:

```
Programming
├─ .vscode            # VSCode settings and tasks configuration
│  ├─ settings.json   # Settings to optimize your environment
│  └─ tasks.json      # Pre-configured tasks for compiling and running C++ code
├─ C++                # Contains all C++ related files
│  ├─ GUI             # GUI-related C++ files
│  ├─ solution        # Solutions, templates, and macros
│  │  ├─ bitmask.cpp  # Example problem solution
│  │  ├─ calculator.cpp # Another example solution
│  │  ├─ macro        # Folder containing macros and Python scripts
│  │  │  ├─ macros    # Template files for quick reset
│  │  │  ├─ py-sc     # Python scripts to automate compile and run
│  │  │  ├─ script.bat # Batch script to manage macros
│  │  │  └─ txt       # Output storage (e.g., for test outputs)
│  └─ solution.code-workspace  # VSCode workspace settings
├─ Python             # Contains Python files
│  └─ main.py         # Python script (could be used for extra automation)
└─ README.md          # This file!
```

### 🔍 Important Directories and Files

- **`.vscode/`**: This folder contains VSCode settings to enhance your development environment. It includes settings to speed up compiling and running your C++ programs.
- **`C++/solution/`**: The most important folder for your competitive programming. This folder contains:
  - **Source code files (`*.cpp`)**: Your problem solutions and templates are stored here.
  - **Executable files (`*.exe`)**: Compiled C++ programs.
  - **Batch Scripts** (`reset.bat`, `run.bat`, `cf.bat`): Scripts to automate tasks like resetting templates and running your C++ files.
  - **Macros**: Template files and Python scripts to streamline the development process.
- **`Python/`**: Contains Python scripts that help automate repetitive tasks like compiling and running code.

---

## 🚀 How to Use

### 1. **Resetting the Template**

When starting a new problem, you may want to reset your `main.cpp` to the default template. You can use one of two templates:

- **Basic Template** (`template.cpp`): This is a simple template for single test-case problems.
  
  To reset your code with the basic template, run:
  
  ```bash
  ./reset.bat
  ```

- **Codeforces Template** (`template-main2.cpp`): This template is ideal for **Codeforces** contests, where multiple test cases need to be handled.

  To reset your code with the Codeforces template, run:
  
  ```bash
  ./cf.bat
  ```

### 2. **Compiling and Running Code**

Once you've written your solution in `main.cpp`, you can compile and run it with a single command. This will compile the C++ code and save the output in a text file (`output.txt`).

To compile and run your code, use:
  
```bash
./run.bat
```

This script automates the following steps:
- Compiles the C++ file (`main.cpp`).
- Executes the compiled file and redirects the output to `output.txt`.
- Displays any errors if the compilation fails.

### 3. **Advanced Usage with `script.bat`**

You can also use the more flexible `script.bat` for additional commands like resetting templates or running scripts. For example:

- To reset using the Codeforces template:
  ```bash
  ./script.bat resetcscript
  ```
  
- To run the program:
  ```bash
  ./script.bat runscript
  ```

---

## 📝 Python Automation

There are two Python scripts in the `macro/py-sc/` folder that help with automation:

1. **`reset.py`**: This script resets your `main.cpp` to either the basic or Codeforces template. It takes a command-line argument (`1` for the basic template, `2` for Codeforces template).
  
   Example:
   ```bash
   python "C:\Users\User\Documents\Programming\C++\solution\macro\py-sc\reset.py" 1
   ```
  
2. **`run.py`**: This script compiles and runs your code, saving the output in `output.txt`.

   Example:
   ```bash
   python "C:\Users\User\Documents\Programming\C++\solution\macro\py-sc\run.py"
   ```

---

## 🔧 VSCode Integration

This project is set up with Visual Studio Code in mind. Inside the `.vscode` folder, you’ll find:
- **`settings.json`**: Adjusts your workspace settings to enhance code formatting, IntelliSense, and more.
- **`tasks.json`**: Pre-configured tasks for compiling and running your C++ code. You can use VSCode's built-in task runner to execute these commands easily.

To compile and run your code in VSCode, simply press **`Ctrl+Shift+B`** or **`F5`**. You can also modify the task settings in `tasks.json` to suit your specific needs.

---

## 🌟 Features Summary

- **Fast Template Reset**: Quickly reset your coding environment with the basic or Codeforces template.
- **Easy Compilation and Execution**: Run your code and save the output to a text file with a single command.
- **Python Automation**: Use Python scripts to automate resetting and running your programs.
- **VSCode Ready**: Optimized for VSCode with pre-configured settings and tasks.

---

## 🏁 Contributing

I welcome contributions! If you'd like to improve the repository, feel free to fork it, make your changes, and submit a pull request. You can also open issues if you encounter any problems or have feature suggestions. 🌟

---

## 📜 License

This project is licensed under the MIT License. See the `LICENSE` file for more details.

---

Happy coding and good luck with your competitive programming journey! 💻🎯
