@echo off

REM Update the paths to the reset.py and run.py scripts according to your project tree
SET RESET_SCRIPT_PATH=C:\Users\User\Documents\C++\solution\macro\py-sc\reset.py
SET RUN_SCRIPT_PATH=C:\Users\User\Documents\C++\solution\macro\py-sc\run.py

IF "%~1"=="" (
    echo Usage: %0 [resetscript|resetcscript|runscript]
    exit /b 1
)

SET COMMAND=%~1

IF "%COMMAND%"=="resetscript" (
    python "%RESET_SCRIPT_PATH%" 1
) ELSE IF "%COMMAND%"=="resetcscript" (
    python "%RESET_SCRIPT_PATH%" 2
) ELSE IF "%COMMAND%"=="runscript" (
    python "%RUN_SCRIPT_PATH%"
) ELSE (
    echo Invalid command. Use 'resetscript', 'resetcscript', or 'runscript'.
    exit /b 1
)