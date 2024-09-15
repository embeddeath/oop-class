/***********************************************************
    File: Border.cpp
    Description: Border class.
    Author: Miguel Márquez
    Date: 9/1/2024

************************************************************/

/***********************************************************
    Includes
************************************************************/
#include "Border.hpp"
#include "Common.hpp"
#include <iostream>

/***********************************************************
    Type Definitions
************************************************************/

/***********************************************************
    Macro Definitions
************************************************************/

/***********************************************************
    Unit-Internal Function Declarations
************************************************************/

/***********************************************************
    Global Variable Definitions
************************************************************/

/***********************************************************
    Class Declarations and Definitions
************************************************************/

Border::Border(COORD origin, int length, int height)
{
    
    this->length = length;
    this->height = height; 
    this->origin = origin;
    computeCorners();  
    computeLimits();
}

void Border::computeCorners()
{
    upperLeftCorner = origin; 

    upperRightCorner.Y = origin.Y; 
    upperRightCorner.X = origin.X + length - 1; 

    lowerLeftCorner.Y = origin.Y + height - 1; 
    lowerLeftCorner.X = origin.X; 

    lowerRightCorner.Y = origin.Y + height - 1; 
    lowerRightCorner.X = origin.X + length - 1; 
    

}
void Border::computeLimits()
{
    upLimit = origin.Y; 
    lowLimit = origin.Y + height - 1;
    leftLimit = origin.X; 
    rightLimit = origin.X + length -1; 
}


void Border::drawVerticalLine (COORD start, COORD end)
{
    COORD cursorPosition = start;

    for(int i = start.Y; i <= end.Y;  i++ )
    {
        gotoxy(cursorPosition); 
        cursorPosition.Y++; 
        std::cout << '+';
    }
}


void Border::drawHorizontalLine(COORD start, COORD end)
{
    COORD cursorPosition = start;

    gotoxy(cursorPosition);

    for(int i = start.X; i <= end.X; i++ ) 
    {
        std::cout << '+'; 
    }
} 

void Border::draw()
{
    drawVerticalLine(upperLeftCorner, lowerLeftCorner); 
    drawVerticalLine(upperRightCorner, lowerRightCorner); 

    drawHorizontalLine(upperLeftCorner, upperRightCorner); 
    drawHorizontalLine(lowerLeftCorner, lowerRightCorner); 
}

int Border::getLowLimit()
{
    return lowLimit; 
}

int Border::getUpLimit()
{
    return upLimit; 
}

int Border::getRightLimit()
{
    return rightLimit; 
}

int Border::getLeftLimit()
{
    return leftLimit; 
}




/***********************************************************
    Function Definitions
************************************************************/
