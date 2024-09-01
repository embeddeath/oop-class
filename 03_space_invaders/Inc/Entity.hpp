#pragma once
/***********************************************************
    File: Game.hpp
    Description: Game class.
    Author: Miguel Márquez
    Date: 8/29/2024

************************************************************/
/***********************************************************
    Includes
************************************************************/
#include <iostream>
#include <windows.h>

/***********************************************************
    Type Definitions
************************************************************/
typedef struct Square
{
    int length; 
    int height; 
}; 

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

class Entity 
{
    public:
        Entity(COORD initialPosition, Square screenBounds); 
        COORD getCurrentPosition();
        COORD getPreviousPosition(); 
        virtual void draw() = 0; /* Each derived class will have its own implementation of the draw method*/

    protected:
        COORD currentPosition;
        COORD previousPosition;   
        Square screenBounds;
        bool renderPendingFlag; 
}; 

enum class Direction
{
    UP = 0, 
    UP_RIGHT, 
    RIGHT, 
    DOWN_RIGHT,  
    DOWN,
    DOWN_LEFT, 
    LEFT, 
    UP_LEFT
}; 

class Ball : public Entity
{
    public: 
        Ball(COORD initialPosition, Square screenBounds);
        void collide();
        void calculatePosition();  
        void draw() override; 

    private: 
        int speed;
        int direction;
}; 


/***********************************************************
    Function Definitions
************************************************************/
extern void gotoxy(COORD coord); 