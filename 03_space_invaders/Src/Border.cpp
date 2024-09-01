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


Border::Border(COORD initialPosition, Square s) : Entity(initialPosition, s)
{
    
    size = s;
    currentPosition = initialPosition;
    computeCorners();  
    computeLimits();
    

    //std::cout << "bordersize height: " << borderSize.height << std::endl;
}

void Border::computeCorners()
{
    upperLeftCorner = currentPosition; 

    upperRightCorner.Y = currentPosition.Y; 
    upperRightCorner.X = currentPosition.X + size.length - 1; 

    lowerLeftCorner.Y = currentPosition.Y + size.height - 1; 
    lowerLeftCorner.X = currentPosition.X; 

    lowerRightCorner.Y = currentPosition.Y + size.height - 1; 
    lowerRightCorner.X = currentPosition.X + size.length - 1; 
    

}
void Border::computeLimits()
{
    upLimit = currentPosition.Y; 
    lowLimit = currentPosition.Y + size.height - 1;
    leftLimit = currentPosition.X; 
    rightLimit = currentPosition.X + size.length -1; 
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






/***********************************************************
    Function Definitions
************************************************************/
