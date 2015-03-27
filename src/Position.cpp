//------------------------------------------------------------------------------
// Position.cpp
//
// Group: Group 2, study assistant: Christoph Hack
//
// Author: Magnus Selin (1430930)
//------------------------------------------------------------------------------
//

#include "Position.h"

//------------------------------------------------------------------------------
bool Position::parse(std::string pos)
{
    // Temporary variables to save x and y in before validation
    int x, y;
    // Temporary varables used for validation
    // tmp1 == '(', tmp2 == ',', tmp3 == ')' are the only acceptable values
    char tmp1, tmp2, tmp3;

    // Parse string, split between integers and charachters 
    std::stringstream ss(pos);
    ss >> tmp1 >> x >> tmp2 >> y >> tmp3;

    // Toggle eof and check that there's no trailing charachters in input
    ss.ignore();
    if (!ss.eof())
        return false;

    // Check that all separating charachters are of right value
    if (!(tmp1 == '(' and tmp2 == ',' and tmp3 == ')'))
        return false;

    // All tests cleared => pos is valid, set x_ and y_
    x_ = x;
    y_ = y;

    return true;
}

//------------------------------------------------------------------------------
std::string Position::toString()
{
    // Use a stringstream to format the output in the right way "(<x_>, <y_>)"
    std::stringstream ss;
    ss << "(" << x_ << "," << y_ << ")";

    // Convert stream to string and return it
    std::string str = ss.str();
    return str;
}
