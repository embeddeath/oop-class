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
#include "Entity.hpp"
#include "Border.hpp"
#include "Paddle.hpp"


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

class collisionManager
{
    public: 
        collisionManager(Border& _borderRef,
                         Paddle& _leftPaddleRef, 
                         Paddle& _rightPaddleRef,
                         Ball& _ballRef);  

        void process();
        bool leftPlayerScored(); 
        bool rightPlayerScored(); 

        
        
    private: 
        Border& borderRef; 
        Paddle& leftPaddleRef; 
        Paddle& rightPaddleRef; 
        Ball& ballRef; 

        bool isBallCollidingRightPaddle();
        bool isBallCollidingLeftPaddle(); 
        bool isBallCollidingTopBorder(); 
        bool isBallCollidingBottomBorder(); 
        bool isBallCollidingLeftBorder(); 
        bool isBallCollidingRightBorder(); 

        bool pointForLeft; 
        bool pointForRight; 





}; 





/***********************************************************
    Function Definitions
************************************************************/


