/***********************************************************
    File: main.cpp
    Author: Miguel Márquez
    Date: 9/14/2024

************************************************************/

/***********************************************************
    Includes
************************************************************/
#include <iostream>
#include <string>
#include <array>
#include "key.hpp"
#include <SquareInScreen.hpp>

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

/***********************************************************
    Function Definitions
************************************************************/


int main (int argc, char* argv[])
{
    /* Detect keystroke*/
    Key keyW('W'), keyA('A'), keyS('S'), keyD('D'); 

    squareInScreen mySquare(2, 0, 0); 

    while(1)
    {
        if (true == keyW.detectRisingEdge())
        {
            //std::cout << "Letter W is pressed" << std::endl;
            mySquare.moveUpwards(); 
        }
        if (true == keyA.detectRisingEdge())
        {
            //std::cout << "Letter A is pressed" << std::endl;
            mySquare.moveLeft();
        }
        if (true == keyS.detectRisingEdge())
        {
            //std::cout << "Letter S is pressed" << std::endl;
            mySquare.moveDownWards();
        }
        if (true == keyD.detectRisingEdge())
        {
            //std::cout << "Letter D is pressed" << std::endl;
            mySquare.moveRight();            
        }

        
        mySquare.render(); 
        
    }
}