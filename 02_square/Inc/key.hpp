#pragma once
/***********************************************************
    File: key.hpp
    Description: Key class that detects key presses, rising edges and falling edges.  
    Author: Miguel Márquez
    Date: 9/14/2024

************************************************************/

/***********************************************************
    Includes
************************************************************/
#include <windows.h>

/***********************************************************
    Type Definitions
************************************************************/

/***********************************************************
    Macro Definitions
************************************************************/

/***********************************************************
    External Interface Function Declarations
************************************************************/

/***********************************************************
    Global Variable Definitions
************************************************************/

/***********************************************************
    Class Declarations and Definitions
************************************************************/

class Key
{
    public:

        Key(int winuserVkey)
        {
            this->winuserVkey = winuserVkey;  
            this->keyStatus = false; 
            this->keyStatus_prev = false;

            /* Call once to clear key buffer. */
            GetAsyncKeyState(winuserVkey); 
        }

        bool detectRisingEdge(void)
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

        bool detectFallingEdge(void)
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

        bool isPressed(void)
        {
            this->process(); 

            return this->keyStatus; 
        }

    private:
        int winuserVkey;
        bool keyStatus;
        bool keyStatus_prev;

        void process()
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
}; 

/***********************************************************
    Function Definitions
************************************************************/
