#pragma once
/***********************************************************
    File: Border.hpp
    Description: Border class. 
    Author: Miguel Márquez
    Date: 9/1/2024

************************************************************/
/***********************************************************
    Includes
************************************************************/
#include "windows.h"

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

class Border
{
    public: 
        Border(COORD origin, int length, int height); 
        void draw();
    private:
        int length; 
        int height; 

        COORD origin; 
        
        COORD upperRightCorner; 
        COORD upperLeftCorner; 
        COORD lowerRightCorner; 
        COORD lowerLeftCorner; 

        int upLimit; 
        int lowLimit; 
        int leftLimit; 
        int rightLimit; 

        void computeCorners(); 
        void computeLimits();
        void drawVerticalLine(COORD start, COORD end); 
        void drawHorizontalLine(COORD start, COORD end); 
};


/***********************************************************
    Function Definitions
************************************************************/
