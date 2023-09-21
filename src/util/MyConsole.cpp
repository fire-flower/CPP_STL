#include "MyConsole.h"

void PrintConsole(const char *lpszText, short nColor)
{
#ifdef _WIN32
    HANDLE  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, nColor | 0x0008);
#else
    std::ostringstream oss;
    oss << "\033[1;" << nColor << "m";
    std::cout << oss.str();
#endif
    std::cout << lpszText << std::endl;;

#ifdef _WIN32
    SetConsoleTextAttribute(hConsole, 0x0008);
#else
    std::cout << "\033[0m";
#endif
}