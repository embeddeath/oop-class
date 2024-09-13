#include <iostream>
#include <stdlib.h>
#include "entity.hpp"
#include "Border.hpp"
#include "Paddle.hpp"
#include "key.hpp"
#include "Common.hpp"



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
            gotoxy( {BORDER_ORIGIN_X, BORDER_ORIGIN_Y + BORDER_HEIGHT + 2}); 
            std::cout<< "                                                              ";
            gotoxy( {BORDER_ORIGIN_X, BORDER_ORIGIN_Y + BORDER_HEIGHT + 2}); 
            std::cout<< "BorderLowLimit = " << myBorder.getLowLimit() << " LeftPaddleCurrentPositionY = " << leftPaddle.getCurrentPosition().Y << std::endl;
        }
        if (keyD.detectRisingEdge())
        {
            leftPaddle.moveDown(); 

            gotoxy( {BORDER_ORIGIN_X, BORDER_ORIGIN_Y + BORDER_HEIGHT + 2}); 
            std::cout<< "                                                              ";
            gotoxy( {BORDER_ORIGIN_X, BORDER_ORIGIN_Y + BORDER_HEIGHT + 2}); 
            std::cout<< "BorderLowLimit = " << myBorder.getLowLimit() << " LeftPaddleCurrentPositionY = " << leftPaddle.getCurrentPosition().Y << std::endl; 

  
        }

        /* Capture user input */
        if (keyUp.detectRisingEdge())
        {
            rightPaddle.moveUp(); 
            gotoxy( {BORDER_ORIGIN_X, BORDER_ORIGIN_Y + BORDER_HEIGHT +3}); 
            std::cout<< "                                                              ";
            gotoxy( {BORDER_ORIGIN_X, BORDER_ORIGIN_Y + BORDER_HEIGHT + 3}); 
            std::cout<< "BorderLowLimit = " << myBorder.getLowLimit() << " RightPaddleCurrentPositionY = " << rightPaddle.getCurrentPosition().Y << std::endl; 
        }
        if (keyDown.detectRisingEdge())
        {
            rightPaddle.moveDown(); 
            gotoxy( {BORDER_ORIGIN_X, BORDER_ORIGIN_Y + BORDER_HEIGHT +3}); 
            std::cout<< "                                                              ";
            gotoxy( {BORDER_ORIGIN_X, BORDER_ORIGIN_Y + BORDER_HEIGHT + 3}); 
            std::cout<< "BorderLowLimit = " << myBorder.getLowLimit() << " RightPaddleCurrentPositionY = " << rightPaddle.getCurrentPosition().Y << std::endl; 
        }

        leftPaddle.draw();
        rightPaddle.draw(); 


        //system("cls"); 
        
    }
}


