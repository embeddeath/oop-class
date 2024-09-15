#pragma once
/***********************************************************
    File: Common.cpp
    Description: Functions shared between classes. 
    Author: Miguel Márquez
    Date: 9/1/2024

************************************************************/
/***********************************************************
    Includes
************************************************************/
#include <windows.h>
#include "Common.hpp"

/***********************************************************
    Type Definitions
************************************************************/

/***********************************************************
    Macro Definitions
************************************************************/

/***********************************************************
    External Interface Function Declarations
************************************************************/


/***********************************************************
    Global Variable Definitions
************************************************************/

/***********************************************************
    Class Declarations and Definitions
************************************************************/


/***********************************************************
    Function Definitions
************************************************************/
void gotoxy(COORD coord) {
    
    // Get the console handle (STD_OUTPUT_HANDLE is the default console)
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


void printDebugData(std::string string, COORD printLocation)
{
    gotoxy(printLocation);
    std::cout << string << std::endl; 
}

void hideCursor() 
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;

    GetConsoleCursorInfo(consoleHandle, &cursorInfo);  // Get current cursor information
    cursorInfo.bVisible = false;                      // Set cursor visibility to false
    SetConsoleCursorInfo(consoleHandle, &cursorInfo);  // Apply the changes
}