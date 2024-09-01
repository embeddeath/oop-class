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
#include "Entity.hpp"
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

class Border : public Entity
{
    public: 
        Border(COORD initialPosition, Square s); 
        void draw() override; 
    private:
        Square size;
        
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
