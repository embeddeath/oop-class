#include <iostream>
#include <stdlib.h>
#include "entity.hpp"
#include "key.hpp"


#define FRAMES_PER_SECOND 30

int main()
{   
    COORD initialPaddleCoord = {0, 0};
    Square screen = {100, 100};  

    Paddle myPaddle(initialPaddleCoord, screen, 3); 
    initialPaddleCoord = {30, 0}; 
    Paddle enemyPaddle(initialPaddleCoord, screen, 3); 

    Key keyA('A'), keyD('D'); 
    Key keyUp(VK_UP), keyDown(VK_DOWN); 


    system("cls"); 

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
        // COORD pos; 

        // pos = myPaddle.getPreviousPosition(); 
        // std::cout << "Square previous x: " << pos.X << ", y: " << pos.Y << std::endl; 

        // pos = myPaddle.getCurrentPosition(); 
        // std::cout << "Square current x: " << pos.X << ", y: " << pos.Y << std::endl;    

        // system("cls"); 
        
    }
}


