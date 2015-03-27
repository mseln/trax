//------------------------------------------------------------------------------
// Game.cpp
//
// Group: Group 2, study assistant: Christoph Hack
//
// Author: Magnus Selin (1430930)
//------------------------------------------------------------------------------
//

#include "Game.h"

//------------------------------------------------------------------------------
void Game::togglePlayer()
{
    // changes the active player to red if current active player is white or
    // vice versa
    if (active_ == COLOR_WHITE)
        active_ = COLOR_RED;
    else if (active_ == COLOR_RED) 
        active_ = COLOR_WHITE;
}

//------------------------------------------------------------------------------
void Game::run()
{
    running_ = true;

    // game loop
    while (running_)
    {
       // command line prompt
       std::cout << "sep> "; 

       std::string arg;
       std::cin >> arg;

       // check arguments, if argument == "quit" set running_ to false
       // => game loop is going to be exited
       if (arg == "quit")
           running_ = false;
       // ignore unknown commands
       else
           ; // no operation
    }
}
