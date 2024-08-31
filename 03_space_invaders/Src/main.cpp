#include <iostream>
#include <stdlib.h>
#include "entity.hpp"
#include "key.hpp"


#define FRAMES_PER_SECOND 30



int main()
{   
    COORD initialPaddleCoord = {2, 2};
    Square screen = {100, 30};  

    Paddle myPaddle(initialPaddleCoord, screen, 3); 
    initialPaddleCoord = {97, 2}; 
    Paddle enemyPaddle(initialPaddleCoord, screen, 3); 

    Key keyA('A'), keyD('D'); 
    Key keyUp(VK_UP), keyDown(VK_DOWN); 


    system("cls"); 

    Border myBorder({0,0}, screen); 

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

        myPaddle.draw();
        enemyPaddle.draw(); 


        //system("cls"); 
        
    }
}


