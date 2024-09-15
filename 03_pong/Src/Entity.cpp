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

void Entity::setPosition(COORD position)
{
    currentPosition = position; 
    previousPosition = position; 
    renderPendingFlag = true; 
}
Ball::Ball(COORD initialPosition, Border& b) : Entity(initialPosition, b)
{
    dirX = 1; 
    dirY = 1; 
}

void Ball::collide()
{

}

void Ball::calculateDirection()
{
    
}

void Ball::move()
{
    if (true == motionAllowed)
    {
        previousPosition = currentPosition; 
        currentPosition.X += dirX;
        currentPosition.Y += dirY;
    }

}

void Ball::draw()
{
    gotoxy(previousPosition);
    std::cout<<' ';
    gotoxy(currentPosition);
    std::cout<<'0';
}



void Ball::setDirX(int _dir)
{
    dirX = _dir; 
}

void Ball::setDirY(int _dir)
{
    dirY = _dir; 
}

void Ball::invertDirX()
{
    dirX = -dirX; 
}

void Ball::invertDirY()
{
    dirY = -dirY;
}

int Ball::getDirX()
{
    return dirX; 
}

int Ball::getDirY()
{
    return dirY; 
}

void Ball::allowMotion()
{
    motionAllowed = true; 
}

void Ball::preventMotion()
{
    motionAllowed = false; 
}


void Ball::erase()
{
    gotoxy(currentPosition);
    std::cout<<'0';
}
/***********************************************************
    Function Definitions
************************************************************/
