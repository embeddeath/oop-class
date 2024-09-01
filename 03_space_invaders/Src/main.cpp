#include <iostream>
#include <stdlib.h>
#include "entity.hpp"
#include "Border.hpp"
#include "Paddle.hpp"
#include "key.hpp"

#define FRAMES_PER_SECOND 30

int main()
{   

    /* Initialize Border*/
    Border myBorder({2,2}, {100, 30}); 

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


