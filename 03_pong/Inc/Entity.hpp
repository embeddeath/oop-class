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
        virtual void erase() = 0; 
        void setPosition(COORD position); 

    protected:
        COORD currentPosition;
        COORD previousPosition;   
        Square screenBounds;
        bool renderPendingFlag;
        Border& borderRef;  
}; 


class Ball : public Entity
{
    public: 
        Ball(COORD initialPosition, Border& b);
        void collide();
        void move();  
        void draw() override;
        void erase() override;  
        void calculateDirection();

        void setDirX(int _dir); 
        void setDirY(int _dir); 
        void invertDirX(); 
        void invertDirY(); 
        int getDirX(); 
        int getDirY(); 

        void allowMotion(); 
        void preventMotion(); 


    private: 
        int dirX; 
        int dirY;
        bool motionAllowed;  


}; 


/***********************************************************
    Function Definitions
************************************************************/
extern void gotoxy(COORD coord); 