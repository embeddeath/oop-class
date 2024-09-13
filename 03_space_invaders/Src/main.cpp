#include <iostream>
#include <stdlib.h>
#include "entity.hpp"
#include "Border.hpp"
#include "Paddle.hpp"
#include "key.hpp"
#include "Common.hpp"
#include "windows.h"
#include "CollisionManager.hpp"





int main()
{   

    /* Initialize Border*/
    Border myBorder({BORDER_ORIGIN_X, BORDER_ORIGIN_Y}, BORDER_LENGTH, BORDER_HEIGHT); 
    //Paddle myPaddle({2, 2}, myBorder, 3); 
    //Paddle enemyPaddle({97, 2}, myBorder, 3); 

    Paddle leftPaddle({BORDER_ORIGIN_X + PADDLE_X_OFFSET , PADDLE_Y_START_LOCATION}, myBorder, 3); 
    Paddle rightPaddle({BORDER_LENGTH - PADDLE_X_OFFSET, PADDLE_Y_START_LOCATION}, myBorder, 3); 


    Ball myBall( {20,20}, myBorder); 
    Key keyA('A'), keyD('D'); 
    Key keyUp(VK_UP), keyDown(VK_DOWN); 

    collisionManager myCollisionManager (myBorder, leftPaddle, rightPaddle, myBall); 

    system("cls"); 
    
    myBorder.draw(); 

    
    
    while (1)
    {
        unsigned long currentTick, startTick;  
        currentTick =  GetTickCount();  

        if (currentTick - startTick >= TICK_FREQUENCY)
        {
            startTick = currentTick; 

            /* Capture user input */
            if (keyA.isPressed())
            {
                leftPaddle.moveUp();
            }
            if (keyD.isPressed())
            {
                leftPaddle.moveDown(); 
            }

            /* Capture user input */
            if (keyUp.isPressed())
            {
                rightPaddle.moveUp(); 
            }
            if (keyDown.isPressed())
            {
                rightPaddle.moveDown(); 
            }

            myCollisionManager.process(); 
            myBall.calculatePosition(); 
            leftPaddle.draw();
            rightPaddle.draw();

            myBall.draw(); 

        }
        //system("cls"); 
        
    }
}


