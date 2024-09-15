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
#include "Entity.hpp"
#include "Key.hpp"
#include "Paddle.hpp"
#include "Common.hpp"
#include "Border.hpp"
#include "CollisionManager.hpp"

/***********************************************************
    Type Definitions
************************************************************/

/***********************************************************
    Macro Definitions
************************************************************/
#define LEFTPLAYER_ID   0
#define RIGHTPLAYER_ID  1

/* Game states */
#define PAUSE 0 
#define RUN 1
#define WAITING_FOR_SERVE 2


/***********************************************************
    External Interface Function Declarations
************************************************************/


/***********************************************************
    Global Variable Definitions
************************************************************/

/***********************************************************
    Class Declarations and Definitions
************************************************************/

class Game
{
    public: 
        Game(); 
        void run();
        void reset(); 
        void pause(); 
        void init(); 
        void stateMachine();

    private: 
        /* Game entities/border */
        Border myBorder; 
        Paddle leftPaddle; 
        Paddle rightPaddle;
        Ball myBall;

        /* User input*/
        Key keyA, keyD; 
        Key keyUp, keyDown; 
        Key leftServe, rightServe; 

        /* Collision Management */
        collisionManager myCollisionManager; 

        /* Score */
        int leftPlayerScore; 
        int rightPlayerScore;
        int lastPlayerScored;
        int maxPointsPerGame; 

        /* Game Flow*/
        int gameState;
        bool resetHandlingPending;
        bool serveAllowed;   

        /* Timing */
        unsigned long currentTick, startTick; 
        bool hasTickElapsed(); 

        void render();
        void update();
        void processInput();
        
        /* Game flow */

        int pauseState();
        int runState();
        int waitingForSaveState(); 
        void printScore(); 

         
}; 
/***********************************************************
    Function Definitions
************************************************************/
