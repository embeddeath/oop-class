/***********************************************************
    File: main.cpp
    Author: Miguel Márquez
    Date: 8/28/2024

************************************************************/

/***********************************************************
    Includes
************************************************************/
#include <iostream>
#include <string>
#include "Key.hpp"
#include <stdlib.h>
#include <windows.h>

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

/* 
    Classes used: 

    1 - Game: 
    Purpose: The Game class serves as the main controller for the game. It handles the game loop, manages the game state, and coordinates interactions between different parts of the game.
        Responsibilities:
        Initialize the game.
        Run the game loop.
        Update game state.
        Render the game.
        Handle input.
        Manage game states (e.g., running, paused, game over).

    2 - Player Class
    Purpose: The Player class represents the player-controlled character or entity in the game. It manages the player's attributes, actions, and interactions with the game world.
    Responsibilities:
        Store player attributes (e.g., health, score, position).
        Handle player input and movement.
        Manage inventory or abilities.
        Interact with other game objects.

    3 - Enemy Class
    Purpose: The Enemy class represents non-player characters (NPCs) that challenge or oppose the player. Each enemy might have unique behaviors, strengths, and weaknesses.
    Responsibilities:
        Store enemy attributes (e.g., health, position).
        Define enemy behavior (e.g., movement patterns, attack strategies).
        Interact with the player and other game objects.
        Manage AI (Artificial Intelligence) for more complex behaviors.

    4 - Level Class
    Purpose: The Level or Map class defines the environment where the game takes place. It manages the layout, obstacles, and possibly the spawning of objects and entities.
    Responsibilities:
    Load and manage the level or map data.
    Track and update positions of objects and entities.
    Handle collisions and interactions between the player, enemies, and the environment.
    
    5 - InputHandler Class
    Purpose: The InputHandler class processes user input (e.g., keyboard, mouse, controller) and translates it into actions within the game.
    Responsibilities:
        Capture and process input events.
        Map input to game actions (e.g., moving the player, firing a weapon).
        Manage input configurations and settings

    6 - Physics Class
    Purpose: The Physics or CollisionManager class handles the physical interactions between objects in the game, such as collision detection and response.
    Responsibilities:
        Detect collisions between entities (e.g., player and enemies, bullets and walls).
        Calculate physics-related behaviors (e.g., gravity, momentum).
        Apply collision responses (e.g., bounce, damage).

*/



int main (int argc, char* argv[])
{
    /* Instance control keys*/
    Key keyA('A'), keyD('D'), keySpace(VK_SPACE), keyEscape(VK_ESCAPE);  

    
    
    /* Create a list of keys to pass to the input*/ 

    while (1)
    {
        /* Input Manager*/
        if (true == keyA.isPressed())
        {

        }
        if (true == keyD.isPressed())
        {

        }
        if (true == keySpace.isPressed())
        {

        }
        if (true == keyEscape.isPressed())
        {
       
        }

    }
    return 0; 
}