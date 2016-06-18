//
// Created by Alexandre Sejournant on 09/06/2016.
//

#include <Player.hpp>

#include <iostream>

#include <debug.hh>
#include <colors.hh>

Player::Player(t_irrDevice *newDevice): Object(newDevice)
{
    _type   =   "PLAYER";
    if (DBG >= DEBUG_1)
        std::cerr << YELLOW << ">Object is type " << CYAN << "[" << _type << "]" << COLOR_RESET << std::endl << std::endl;
}
