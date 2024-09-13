/***********************************************************
    File: Paddle.cpp
    Description: Paddle class.
    Author: Miguel Márquez
    Date: 9/1/2024

************************************************************/

/***********************************************************
    Includes
************************************************************/
#include "Paddle.hpp"

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

Paddle::Paddle(COORD COORD, Border& b, int length) : Entity(COORD, b)
{
    this->length = length; 
}

void Paddle::moveUp()
{
    previousPosition.Y = currentPosition.Y; 
    currentPosition.Y--;
    renderPendingFlag = true; 
}

void Paddle::moveDown()
{
    previousPosition.Y = currentPosition.Y; 
    currentPosition.Y++;
    renderPendingFlag = true;  
}

void Paddle::draw() 
{
    COORD coordinate; 

    if (true == renderPendingFlag)
    {
        /* First delete previous object in screen*/
        for (int i = previousPosition.Y; i <= previousPosition.Y+length; i++)
        {
            coordinate.Y = i; 
            coordinate.X = previousPosition.X; 
            gotoxy(coordinate); 
            std::cout << ' '; 
        }

        /* Now draw current object in screen*/
        for (int i = currentPosition.Y; i <= currentPosition.Y+length; i++)
        {
            coordinate.Y = i; 
            coordinate.X = currentPosition.X; 
            gotoxy(coordinate); 
            std::cout << '#'; 
        }

        renderPendingFlag = false; 
    }


}







/***********************************************************
    Function Definitions
************************************************************/
