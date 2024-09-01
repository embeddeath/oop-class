/***********************************************************
    File: Game.cpp
    Description: Game class.
    Author: Miguel Márquez
    Date: 8/29/2024

************************************************************/

/***********************************************************
    Includes
************************************************************/
#include "Entity.hpp"
#include <iostream>
#include <exception>
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

void gotoxy(COORD coord) {
    
    // Get the console handle (STD_OUTPUT_HANDLE is the default console)
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

Entity::Entity(COORD initialPosition, Square screenBounds)
{


}

COORD Entity::getCurrentPosition()
{
    return currentPosition; 
}

COORD Entity::getPreviousPosition()
{
    return previousPosition; 
}


Ball::Ball(COORD initialPosition, Square screenBounds) : Entity(initialPosition, screenBounds)
{
    
}

void Ball::collide()
{
    /* Logic to update speed */
    speed = speed; 

    /* Logic to update direction */
    direction = direction; 
}

void Ball::calculatePosition()
{
    /* Logic to calculate COORD*/
    currentPosition.X = currentPosition.X; 
    currentPosition.Y = currentPosition.Y; 
}

void Ball::draw()
{

}





/***********************************************************
    Function Definitions
************************************************************/
