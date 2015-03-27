//------------------------------------------------------------------------------
// Position.h
//
// Group: Group 2, study assistant: Christoph Hack
//
// Author: Magnus Selin (1430930)
//------------------------------------------------------------------------------
//

#ifndef POSITION_H
#define POSITION_H

#include <string>
#include <sstream>

//------------------------------------------------------------------------------
// Position Class
// class to save and manage positions
//
class Position
{
    private:
        //----------------------------------------------------------------------
        // x_ and y_ save x resp. y coordinate
        //
        int x_;
        int y_;
    public:
        //----------------------------------------------------------------------
        // Constructor
        // If no parameters given, init with 0
        Position() : x_(0), y_(0) {}

        //----------------------------------------------------------------------
        // Constructor
        // If two parameters given, init x and y coordinates with them
        // @param set x_ to param
        // @param set y_ to param
        //
        Position(int x, int y) : x_(x), y_(y) {}

        //----------------------------------------------------------------------
        // Getters
        // @return x_ resp. y_
        //
        int getX(){ return x_; }
        int getY(){ return y_; }

        //----------------------------------------------------------------------
        // Setters
        // @param Set x_ resp. y_ to param
        //
        void setX(int x){ x_ = x; }
        void setY(int y){ y_ = y; }

        //----------------------------------------------------------------------
        // parse
        // Takes a string, check if in put matches the format "(<x>,<y>)"
        // If valid, sets x_ = <x> and y_ = <y> and returns true
        // otherwise if not valid returns false
        //
        bool parse(std::string pos);

        //----------------------------------------------------------------------
        // toString
        // @return x_ and y_ in the format "(<x_>,<y_>)"
        //
        std::string toString();
};

#endif // POSITION_H
