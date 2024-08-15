#pragma once
/***********************************************************
    File: SquareInScreen.hpp
    Description: Class that tracks square position and renders it on the screen.   
    Author: Miguel Márquez
    Date: 9/14/2024

************************************************************/

/***********************************************************
    Includes
************************************************************/
#include <cstdlib>
#include <cstdio>
#include <windows.h>
/***********************************************************
    Type Definitions
************************************************************/

/***********************************************************
    Macro Definitions
************************************************************/
#define SCREEN_WIDTH   60
#define SCREEN_HEIGHT   25

/***********************************************************
    External Interface Function Declarations
************************************************************/

/***********************************************************
    Global Variable Definitions
************************************************************/

/***********************************************************
    Class Declarations and Definitions
************************************************************/

class squareInScreen
{
    public: 

        squareInScreen( int squareSize, 
                        int squareOriginX,
                        int squareOriginY
                        )
        {
            
            /* Check for out-of-bounds square initialization. */
            int absoluteLengthX = squareSize+squareOriginX; 
            int absoluteLengthY = squareSize+squareOriginY;

            if(absoluteLengthY >= SCREEN_HEIGHT || absoluteLengthX >= SCREEN_WIDTH)
            {
                this->validity = false;
            }
            else
            {
                /* Square is valid, proceed with initialization. */
                this->validity = true;
                this->squareSize = squareSize; 
                this->squareOriginX = squareOriginX;
                this->squareOriginY = squareOriginY; 
                this->screenHeight = SCREEN_HEIGHT; 
                this->screenWidth = SCREEN_WIDTH; 
            }
        }

        bool isValid(void)
        {
            return this->validity; 
        }

        void moveUpwards(void)
        {
            if (this->squareOriginY > 0)
            {
                this->squareOriginY--;
                this->pendingRenderFlag = true;  
            } 
        }

        void moveDownWards(void)
        {
            int absoluteLengthY = this->squareSize+this->squareOriginY;

            if (absoluteLengthY < this->screenHeight)
            {
                this->squareOriginY++;
                this->pendingRenderFlag = true;  
            }
        }

        void moveLeft(void)
        {
            if (this->squareOriginX > 0)
            {
                this->squareOriginX--;
                this->pendingRenderFlag = true;  
            } 
        }

        void moveRight(void)
        {
            int absoluteLengthX = this->squareSize+this->squareOriginX;

            if (absoluteLengthX < this->screenWidth)
            {
                this->squareOriginX++;
                this->pendingRenderFlag = true; 
            }
        }

        void render(void)
        {
            if (true == this->pendingRenderFlag)
            {
                /* I apologize for the shitshow you are about to witness. I will 
                someday learn how to use the STL. :)  */
                system("CLS");

                for(int row = 0; row < screenHeight;  row++)
                {
                    for(int col = 0; col < screenWidth;  col++)
                    {
                        boolean printCharacter =    (col >= this->squareOriginX) && (col < (this->squareOriginX + this->squareSize)) \
                                                    && (row >= squareOriginY) && (row < (this->squareOriginY + this->squareSize)); 
                                                    
                        if(true == printCharacter)
                        {
                            putchar('#'); 
                        }
                        else
                        {
                            putchar(' '); 
                        }
                    }
                    putchar('\n'); 
                }

                this->pendingRenderFlag = false; 
            }
            
        }

    private:
        int squareSize;
        int squareOriginX;
        int squareOriginY;
        int screenHeight;
        int screenWidth;
        bool validity;
        bool pendingRenderFlag;
        char screen[SCREEN_HEIGHT][SCREEN_WIDTH]; 
}; 

/***********************************************************
    Function Definitions
************************************************************/
