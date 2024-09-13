/***********************************************************
    File: InputManager.hpp
    Description: The Key class provides a mechanism to detect
    key presses. 

    Author: Miguel Márquez
    Date: 8/28/2024
************************************************************/

/***********************************************************
    Includes
************************************************************/
#include <iostream>
#include "CollisionManager.hpp"

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

collisionManager::collisionManager( Border& _borderRef,
                                    Paddle& _leftPaddleRef, 
                                    Paddle& _rightPaddleRef,
                                    Ball& _ballRef) :   
                                    borderRef(_borderRef), 
                                    leftPaddleRef(_leftPaddleRef), 
                                    rightPaddleRef(_rightPaddleRef),
                                    ballRef(_ballRef)

{
    pointForLeft = false; 
    pointForRight = false; 
}

bool collisionManager::isBallCollidingLeftBorder()
{
    /* Detect right player point. */
    if (ballRef.getCurrentPosition().X - 1 == borderRef.getLeftLimit())
    {   
        return true; 
    }

    return false; 
}

bool collisionManager::isBallCollidingRightBorder()
{
    /* Detect left player point. */
    if (ballRef.getCurrentPosition().X + 1 == borderRef.getRightLimit())
    {
        return true; 
    }

    return false; 
}

bool collisionManager::isBallCollidingTopBorder()
{
    if (ballRef.getCurrentPosition().Y - 1 == borderRef.getUpLimit())
    {
        return true; 
    }

    return false; 
}


bool collisionManager::isBallCollidingBottomBorder()
{

    if (ballRef.getCurrentPosition().Y + 1 == borderRef.getLowLimit() ) 
    { 
        return true; 
    }

    return false; 
}



bool collisionManager::isBallCollidingLeftPaddle()
{
    bool checkYColission = false; 

    /* If ball is in line with the x position of the paddle*/
    if (ballRef.getCurrentPosition().X - 1 == leftPaddleRef.getCurrentPosition().X ) 
    { 
        checkYColission = true; 
    }

    if (true == checkYColission)
    {
        for (int i = leftPaddleRef.getCurrentPosition().Y; i <= leftPaddleRef.getCurrentPosition().Y + leftPaddleRef.getLength(); i++)
        {
            if (ballRef.getCurrentPosition().Y == i )
            {
                return true; 
            }   
        }
    }

    return false; 
}

bool collisionManager::isBallCollidingRightPaddle()
{
    
    bool checkYColission = false; 

    /* If ball is in line with the x position of the paddle*/
    if (ballRef.getCurrentPosition().X + 1 == rightPaddleRef.getCurrentPosition().X ) 
    { 
        checkYColission = true; 
    }

    if (true == checkYColission)
    {
        for (int i = rightPaddleRef.getCurrentPosition().Y; i <= rightPaddleRef.getCurrentPosition().Y + rightPaddleRef.getLength(); i++)
        {
            if (ballRef.getCurrentPosition().Y == i )
            {
                return true; 
            }   
        }
    }

    return false; 
}

void collisionManager::process()
{
    if (isBallCollidingTopBorder() || isBallCollidingBottomBorder())
    {
        ballRef.invertDirY(); 
    }

    if(isBallCollidingRightBorder())
    {   
        pointForLeft = true; 
    }
    else if (isBallCollidingLeftBorder())
    {
        pointForRight = true; 
    }

    if (isBallCollidingLeftPaddle()|| isBallCollidingRightPaddle())
    {
        ballRef.invertDirX(); 
        ballRef.invertDirY(); 
    }


}

bool collisionManager::leftPlayerScored()
{
    if (true == pointForLeft)
    {
        pointForLeft = false; 
        return true; 
    }
}

bool collisionManager::rightPlayerScored()
{
    if (true == pointForRight)
    {
        pointForRight = false; 
        return true; 
    }
}


/***********************************************************
    Function Definitions
************************************************************/


