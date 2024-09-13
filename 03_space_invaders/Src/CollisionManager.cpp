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

void collisionManager::process()
{
    if (isBallCollidingTopBorder())
    {
        ballRef.invertDirY(); 
    }
    else if (isBallCollidingBottomBorder())
    {
        ballRef.invertDirY(); 
    }
    else if(isBallCollidingRightBorder())
    {
        ballRef.invertDirX(); 
    }
    else if (isBallCollidingLeftBorder())
    {
        ballRef.invertDirX(); 
    }

}

/***********************************************************
    Function Definitions
************************************************************/


