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
#include <windows.h>
#include <iostream>
#include "Key.hpp"

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

Key::Key(int winuserVkey)
{
    this->winuserVkey = winuserVkey;  
    this->keyStatus = false; 
    this->keyStatus_prev = false;

    /* Call once to clear key buffer. */
    GetAsyncKeyState(winuserVkey); 
}

bool Key::detectRisingEdge(void)
{
    bool retVal = false;  

    /* Update status*/
    this->process(); 

    /* If key status transitions from false to true. */
    if (true == keyStatus && false == keyStatus_prev)
    {
        retVal = true; 
    }

    return retVal; 
}

bool Key::detectFallingEdge(void)
{
    bool retVal = false;  

    /* Update status*/
    this->process(); 

    /* If key status transitions from true to false. */
    if (false == keyStatus && true == keyStatus_prev)
    {
        retVal = true; 
    }

    return retVal; 
}

bool Key::isPressed(void)
{
    this->process(); 

    return this->keyStatus; 
}

void Key::process()
{
    keyStatus_prev = keyStatus; 

    if (GetAsyncKeyState(winuserVkey))
    {
        keyStatus = true;  
    }
    else
    {
        keyStatus = false; 
    }
}

InputManager::InputManager()
{   
    
}
/***********************************************************
    Function Definitions
************************************************************/


