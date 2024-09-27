#include <windows.h>

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    const char* CLASS_NAME = "MyWindowClass";

    WNDCLASS wc = {};
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;

    RegisterClass(&wc);

    HWND hwnd = CreateWindowEx(
        0,
        CLASS_NAME,
        "My Window",
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, 800, 600,
        NULL,
        NULL,
        hInstance,
        NULL
    );

    if (hwnd == NULL) {
        return 0;
    }

    // Create input fields (text boxes)
    CreateWindow("EDIT", "", WS_CHILD | WS_VISIBLE | WS_BORDER, 200, 100, 200, 25, hwnd, NULL, hInstance, NULL);
    CreateWindow("EDIT", "", WS_CHILD | WS_VISIBLE | WS_BORDER, 200, 150, 200, 25, hwnd, NULL, hInstance, NULL);
    CreateWindow("EDIT", "", WS_CHILD | WS_VISIBLE | WS_BORDER, 200, 200, 200, 25, hwnd, NULL, hInstance, NULL);
    CreateWindow("EDIT", "", WS_CHILD | WS_VISIBLE | WS_BORDER, 200, 250, 200, 25, hwnd, NULL, hInstance, NULL);
    CreateWindow("EDIT", "", WS_CHILD | WS_VISIBLE | WS_BORDER, 200, 300, 200, 25, hwnd, NULL, hInstance, NULL);

    ShowWindow(hwnd, nCmdShow);

    MSG msg = {};
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}
