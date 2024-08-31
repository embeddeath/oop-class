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

    /* Check that initial COORD is within screen bounds */
    if ((initialPosition.X < screenBounds.length) && (initialPosition.Y < screenBounds.height))
    {
        currentPosition = initialPosition;
        previousPosition = initialPosition;
        renderPendingFlag = true; 
    }
    else
    {
        std::cout << "Error Entity initialized out of bounds, exiting program. " << std::endl;
        std::terminate(); 
    }

}

COORD Entity::getCurrentPosition()
{
    return currentPosition; 
}

COORD Entity::getPreviousPosition()
{
    return previousPosition; 
}

Paddle::Paddle(COORD COORD, Square screenBounds, int length) : Entity(COORD, screenBounds)
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

Border::Border(COORD initialPosition, Square screenBounds) : Entity(initialPosition, screenBounds)
{
    
    borderSize = screenBounds;
    currentPosition = initialPosition;    

    //std::cout << "bordersize height: " << borderSize.height << std::endl;
}

void Border::draw()
{
    COORD currentPosition_temp = currentPosition;

    /* Draw upper side */
    gotoxy(currentPosition_temp);
    
    for(int i = 0; i < borderSize.length; i++ ) /* Substracting one to account for first element*/
    {
        std::cout << '*'; 
    }

    /* Draw left side. */
    for(int i = 0; i < borderSize.height; i++ )
    {
        gotoxy(currentPosition_temp); 
        currentPosition_temp.Y++; 
        std::cout << '*';
    }
    
    /* Position cursor on lower left corner*/
    currentPosition_temp = currentPosition;
    currentPosition_temp.Y = (currentPosition_temp.Y + (short)borderSize.height - 1);

    gotoxy(currentPosition_temp); 

    /* Draw low side */ 
    for(int i = 0; i < borderSize.length; i++ )
    {
        std::cout << '*'; 
    }

    /* Position cursor on upper right corner*/
    currentPosition_temp = currentPosition;
    currentPosition_temp.X += borderSize.length - 1; 
    
    /* Draw right side. */
    for(int i = 0; i < borderSize.height; i++ )
    {
        gotoxy(currentPosition_temp); 
        currentPosition_temp.Y++; 
        std::cout << '*';
    }

}




/***********************************************************
    Function Definitions
************************************************************/
