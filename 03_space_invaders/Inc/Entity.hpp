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
#include "Common.hpp"
#include "Border.hpp"
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
        Entity(COORD initialPosition, Border& b); 
        COORD getCurrentPosition();
        COORD getPreviousPosition(); 
        virtual void draw() = 0; /* Each derived class will have its own implementation of the draw method*/

    protected:
        COORD currentPosition;
        COORD previousPosition;   
        Square screenBounds;
        bool renderPendingFlag;
        Border& borderRef;  
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
        Ball(COORD initialPosition, Border& b);
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