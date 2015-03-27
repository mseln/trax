//------------------------------------------------------------------------------
// Game.h
//
// Group: Group 2, study assistant: Christoph Hack
//
// Author: Magnus Selin (1430930)
//------------------------------------------------------------------------------
//

#ifndef GAME_H
#define GAME_H

#include <iostream>

#include "Color.h"

class Tile;

//------------------------------------------------------------------------------
// Game Class
// class to save and manage positions
//
class Game
{
    private:
        //----------------------------------------------------------------------
        // active_ has the value of the current active player
        //
        Color active_;

        //----------------------------------------------------------------------
        // start_tile_ is the tile which the game is initated from
        //
        Tile * start_tile_;
        
        //----------------------------------------------------------------------
        // running_ simple flag that can be checked, if game is running or not
        //
        bool running_;
        
    public:
        //----------------------------------------------------------------------
        // Constructor
        // start player is initiated to white
        // start tile is initiated to undefined (null)
        //
        Game() : active_(COLOR_WHITE), start_tile_(NULL) {}
        
        //----------------------------------------------------------------------
        // Setter for start tile
        // @param start_tile is setted with a pointer to a specific tile
        //
        void setStart(Tile * tile){ start_tile_ = tile;}

        //----------------------------------------------------------------------
        // run starts the game by entering a loop which is looped until
        // running_ == false
        //
        void run();

        //----------------------------------------------------------------------
        // setter for run
        // @param running is set to value of param, either false or true
        //
        void setRun(bool state){ running_ = state; }
        
        //----------------------------------------------------------------------
        // togglePlayer switch the active player from white to red or
        // vice versa
        //
        void togglePlayer();

        //----------------------------------------------------------------------
        // Getter for active player
        // @return the player_
        Color getActivePlayer(){ return active_; }
};

#endif // GAME_H
