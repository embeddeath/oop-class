#include <iostream>
#include <stdlib.h>
#include "entity.hpp"
#include "Border.hpp"
#include "Paddle.hpp"
#include "key.hpp"

#define FRAMES_PER_SECOND 30

#define BORDER_ORIGIN_X     2
#define BORDER_ORIGIN_Y     2
#define BORDER_LENGTH       100
#define BORDER_HEIGHT       30

#define PADDLE_X_OFFSET 3
#define PADDLE_Y_START_LOCATION BORDER_HEIGHT/2

int main()
{   

    /* Initialize Border*/
    Border myBorder({BORDER_ORIGIN_X, BORDER_ORIGIN_Y}, BORDER_LENGTH, BORDER_HEIGHT); 
    //Paddle myPaddle({2, 2}, myBorder, 3); 
    //Paddle enemyPaddle({97, 2}, myBorder, 3); 

    Paddle leftPaddle({BORDER_ORIGIN_X + PADDLE_X_OFFSET , PADDLE_Y_START_LOCATION}, myBorder, 3); 
    Paddle rightPaddle({BORDER_LENGTH - PADDLE_X_OFFSET, PADDLE_Y_START_LOCATION}, myBorder, 3); 

    Key keyA('A'), keyD('D'); 
    Key keyUp(VK_UP), keyDown(VK_DOWN); 


    system("cls"); 

    

    myBorder.draw(); 

    while (1)
    {
        /* Capture user input */
        if (keyA.detectRisingEdge())
        {
            leftPaddle.moveUp(); 
        }
        if (keyD.detectRisingEdge())
        {
            leftPaddle.moveDown(); 
        }

        /* Capture user input */
        if (keyUp.detectRisingEdge())
        {
            rightPaddle.moveUp(); 
        }
        if (keyDown.detectRisingEdge())
        {
            rightPaddle.moveDown(); 
        }

        leftPaddle.draw();
        rightPaddle.draw(); 


        //system("cls"); 
        
    }
}


