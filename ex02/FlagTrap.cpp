//
// Created by eyza on 07/07/24.
//

#include "ClapTrap.h"
#include "FlagTrap.h"

FlagTrap::FlagTrap() : ClapTrap(100,100,30,"Default")
{
    std::cout << "FlagTrap - Default constructor called" << std::endl;
}

FlagTrap::FlagTrap(std::string name) : ClapTrap(100,100,30,name)
{
    std::cout << "FlagTrap - Name constructor called" << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap &copy) : ClapTrap()
{
    std::cout << "Flag Trap  - Copy constructor called for: " << m_name << std::endl;
    *this = copy;
}

FlagTrap::~FlagTrap()
{
    std::cout << "Flag Trap - Destructor called for the object: " << m_name << std::endl;
}

void FlagTrap::highFivesGuys()
{
    std::cout << m_name << "send a positive high fives request" << std::endl;
}