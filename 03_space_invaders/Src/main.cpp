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

int main()
{   

    /* Initialize Border*/
    Border myBorder({BORDER_ORIGIN_X, BORDER_ORIGIN_Y}, BORDER_LENGTH, BORDER_HEIGHT); 

    Paddle myPaddle({2, 2}, myBorder, 3); 
    Paddle enemyPaddle({97, 2}, myBorder, 3); 

    Key keyA('A'), keyD('D'); 
    Key keyUp(VK_UP), keyDown(VK_DOWN); 


    system("cls"); 

    

    myBorder.draw(); 

    while (1)
    {
        /* Capture user input */
        if (keyA.detectRisingEdge())
        {
            myPaddle.moveUp(); 
        }
        if (keyD.detectRisingEdge())
        {
            myPaddle.moveDown(); 
        }

        /* Capture user input */
        if (keyUp.detectRisingEdge())
        {
            enemyPaddle.moveUp(); 
        }
        if (keyDown.detectRisingEdge())
        {
            enemyPaddle.moveDown(); 
        }

        // myPaddle.draw();
        // enemyPaddle.draw(); 


        //system("cls"); 
        
    }
}


