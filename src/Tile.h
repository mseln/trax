//------------------------------------------------------------------------------
// Tile.h
//
// Group: Group 2, study assistant: Christoph Hack
//
// Author: Magnus Selin (1430930)
//------------------------------------------------------------------------------
//

#ifndef TILE_H
#define TILE_H

//------------------------------------------------------------------------------
// Tile Class
// class to represent tiles
// keeps track of type and rotation
//
class Tile
{
    public:
        enum Type
        {
            TYPE_CROSS = 1,
            TYPE_CURVE_1 = 2,
            TYPE_CURVE_2 = 3
        };
    private:
        //----------------------------------------------------------------------
        // side_ keep track of what kind of tile *this is and how it is
        // rotated
        //
        Type side_;
        
        //----------------------------------------------------------------------
        // top_color_ holds color of the line that goes to the top in the tile
        //
        Color top_color_;

    public:
        //----------------------------------------------------------------------
        // Constructor
        // @param initiate type and rotation of new tile
        // @param initiate how new tile is going to be colored
        Tile(Type side, Color top_color) : side_(side), top_color_(top_color) {}
};

#endif // TILE_H
