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



Entity::Entity(COORD initialPosition, Border myBorder)
{
    currentPosition = initialPosition;
    previousPosition = initialPosition;

}

COORD Entity::getCurrentPosition()
{
    return currentPosition; 
}

COORD Entity::getPreviousPosition()
{
    return previousPosition; 
}


Ball::Ball(COORD initialPosition, Border myBorder) : Entity(initialPosition, myBorder)
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
