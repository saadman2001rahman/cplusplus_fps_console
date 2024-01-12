#include <iostream>
#include <Windows.h>
using namespace std;


int nSccreenWidth = 120;
int nScreenHeight = 40;

float fPlayerX = 0.0f;
float fPlayerY = 0.0f;
float fPlayerA = 0.0f;

int nMapHeight = 16;
int nMapWidth = 16;

int main() {
    wchar_t *screen = new wchar_t[nSccreenWidth*nScreenHeight];
    HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
    SetConsoleActiveScreenBuffer(hConsole);
    DWORD dwBytesWritten = 0;

    wstring map;

    map += L"################";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"################";
    while (1) {
        for (int x=0; x < nSccreenWidth; x++) {
            return 1;
        }
    }

    screen[nSccreenWidth*nScreenHeight-1] = '\0';
    WriteConsoleOutputCharacter(hConsole, screen, nSccreenWidth*nScreenHeight, { 0,0 }, &dwBytesWritten);
    return 0;
}