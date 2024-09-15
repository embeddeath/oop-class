/***********************************************************
    File: Game.cpp
    Description: Game class.
    Author: Miguel Márquez
    Date: 8/29/2024

************************************************************/

/***********************************************************
    Includes
************************************************************/
#include "Entity.hpp"
#include "Game.hpp"

/***********************************************************
    Type Definitions
************************************************************/

/***********************************************************
    Macro Definitions
************************************************************/

/***********************************************************
    Unit-Internal Function Declarations
************************************************************/

/***********************************************************
    Global Variable Definitions
************************************************************/

/***********************************************************
    Class Declarations and Definitions
************************************************************/
Game::Game() : 
                myBorder({BORDER_ORIGIN_X, BORDER_ORIGIN_Y}, BORDER_LENGTH, BORDER_HEIGHT),
                leftPaddle({BORDER_ORIGIN_X + PADDLE_X_OFFSET , PADDLE_Y_START_LOCATION}, myBorder, PADDLE_LENGTH),
                rightPaddle({BORDER_LENGTH - PADDLE_X_OFFSET, PADDLE_Y_START_LOCATION}, myBorder, PADDLE_LENGTH),
                myBall({BORDER_ORIGIN_X + PADDLE_X_OFFSET + 2, PADDLE_Y_START_LOCATION + PADDLE_LENGTH/2}, myBorder),
                keyA('A'),
                keyD('D'),
                keyUp(VK_UP),
                keyDown(VK_DOWN), 
                leftServe('S'), 
                rightServe(VK_LEFT), 
                myCollisionManager(myBorder, leftPaddle, rightPaddle, myBall)
{

   init(); 
    
}


void Game::init()
{
    leftPlayerScore = 0; 
    rightPlayerScore = 0; 
    lastPlayerScored = RIGHTPLAYER_ID;

    gameState = RUN;
    myBall.preventMotion(); 
    resetHandlingPending = true; 
    serveAllowed = true; 

}

void Game::stateMachine()
{
     
    switch (gameState)
    {
        case PAUSE: 
            gameState = pauseState(); 
        break; 

        case RUN: 
            gameState = runState(); 
        break; 

        case WAITING_FOR_SERVE: 
            gameState = waitingForSaveState(); 
        break; 
    }
}

int Game::pauseState()
{
    int nextState = PAUSE; 
}

int Game::runState()
{
    int nextState = RUN;
    processInput();
    update(); 
    render(); 
    return nextState; 

}

int Game::waitingForSaveState()
{
    int nextState = WAITING_FOR_SERVE;
}

void Game::processInput()
{
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

    if (leftServe.isPressed() && RIGHTPLAYER_ID == lastPlayerScored && true == serveAllowed )
    {
        myBall.setDirX(1); 
        myBall.allowMotion();
        serveAllowed = false; 
    }
    if (rightServe.isPressed() && LEFTPLAYER_ID == lastPlayerScored && true == serveAllowed )
    {
        myBall.setDirX(-1); 
        myBall.allowMotion();
        serveAllowed = false; 
    }
}

void Game::update()
{
    myCollisionManager.process();

    if (myCollisionManager.leftPlayerScored())
    {
        lastPlayerScored = LEFTPLAYER_ID;
        leftPlayerScore++; 
        serveAllowed = true; 
        reset();
    }
    else if (myCollisionManager.rightPlayerScored())
    {
        lastPlayerScored = RIGHTPLAYER_ID;
        rightPlayerScore++;
        serveAllowed = true; 
        reset();
        
    }
     
    myBall.move();
}

void Game::render()
{
    if (true == resetHandlingPending)
    {
        system("CLS");
        printScore(); 
        myBorder.draw(); 
        resetHandlingPending = false; 
    }
    else
    {
        leftPaddle.draw();
        rightPaddle.draw();
        myBall.draw(); 
    }
}

bool Game::hasTickElapsed()
{
    currentTick = GetTickCount();

    if (currentTick - startTick >= TICK_FREQUENCY)
    {
        startTick = currentTick;

        return true; 
    }

    return false; 
}

void Game::reset()
{   
    resetHandlingPending = true; 

    myBall.preventMotion();
    leftPaddle.setPosition({BORDER_ORIGIN_X + PADDLE_X_OFFSET , PADDLE_Y_START_LOCATION}); 
    rightPaddle.setPosition({BORDER_LENGTH - PADDLE_X_OFFSET, PADDLE_Y_START_LOCATION}); 
    
    if(RIGHTPLAYER_ID == lastPlayerScored)
    {
        myBall.setPosition({BORDER_ORIGIN_X + PADDLE_X_OFFSET + 2, PADDLE_Y_START_LOCATION + PADDLE_LENGTH/2});
    }
    else if(LEFTPLAYER_ID == lastPlayerScored)
    {
        myBall.setPosition({BORDER_ORIGIN_X + BORDER_LENGTH - PADDLE_X_OFFSET - 4, PADDLE_Y_START_LOCATION + PADDLE_LENGTH/2}); 
    }

}

void Game::run()
{ 
    while (1)
    {
        if (true == hasTickElapsed())
        {
            stateMachine(); 
        }
    }
    
}

void Game::printScore()
{
    gotoxy({0,0});
    std::cout<<"                                                                                ";
    gotoxy({0,0});
    std::cout<<"Player 1 Score: " << leftPlayerScore << " | " "Player 2 Score: " << rightPlayerScore; 
}

/***********************************************************
    Function Definitions
************************************************************/
