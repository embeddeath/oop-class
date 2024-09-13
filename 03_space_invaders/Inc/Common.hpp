#pragma once
/***********************************************************
    File: Common.hpp
    Description: Functions shared between classes. 
    Author: Miguel Márquez
    Date: 9/1/2024

************************************************************/
/***********************************************************
    Includes
************************************************************/
#include "windows.h"
#include <string>
#include <iostream>

/***********************************************************
    Type Definitions
************************************************************/

/***********************************************************
    Macro Definitions
************************************************************/
#define FRAMES_PER_SECOND 30
#define TICK_FREQUENCY 1000/FRAMES_PER_SECOND

#define BORDER_ORIGIN_X     2
#define BORDER_ORIGIN_Y     2
#define BORDER_LENGTH       100
#define BORDER_HEIGHT       30

#define PADDLE_X_OFFSET 3
#define PADDLE_Y_START_LOCATION BORDER_HEIGHT/2

#define PADDLE_LENGTH 5
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
extern void gotoxy(COORD coord); 
extern void printDebugData(std::string, COORD printLocation); 
extern void hideCursor(); 