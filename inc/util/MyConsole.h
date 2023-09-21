#ifndef MY_CONSOLE_H__
#define MY_CONSOLE_H__

#include <stdio.h>
#include <sstream>
#include <iostream>

 
#ifdef _WIN32
    #include <windows.h> 
#endif
 
#ifdef _WIN32
enum ForeColour {
    Default    = 0x0008,
    Black      = 0x0000,
    Blue       = 0x0001,
    Green      = 0x0002,
    Cyan       = 0x0003,
    Red        = 0x0004,
    Magenta    = 0x0005,
    Yellow     = 0x0006,
    White      = 0x0007,
};
#else
enum ForeColour {
    Default    = 0,
    Black      = 30,
    Red        = 31,
    Green      = 32,
    Yellow     = 33,
    Blue       = 34,
    Magenta    = 35,
    Cyan       = 36,
    White      = 37,
};
#endif


void PrintConsole(const char *lpszText, short nColor);

#endif