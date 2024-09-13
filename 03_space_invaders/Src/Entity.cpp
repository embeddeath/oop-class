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



Entity::Entity(COORD initialPosition, Border& b) : borderRef(b)
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


Ball::Ball(COORD initialPosition, Border& b) : Entity(initialPosition, b)
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
    if(currentPosition.Y - 1 == borderRef.getUpLimit())
    {
        direction = 0; 
    }

    if(currentPosition.Y + 1 == borderRef.getLowLimit())
    {
        direction = 1; 
    }

    previousPosition.Y = currentPosition.Y;
    
    if (direction == 0)
    {
        currentPosition.Y++; 
    }
    else
    {
        currentPosition.Y--; 
    }
}

void Ball::draw()
{
    gotoxy(previousPosition);
    std::cout<<' ';
    gotoxy(currentPosition);
    std::cout<<'0';
}





/***********************************************************
    Function Definitions
************************************************************/
