//
// Created by eyza on 05/07/24.
//

#include "ScavTrap.h"
#include "ClapTrap.h"

ScavTrap::ScavTrap() : ClapTrap(100,50,20,"Default")
{
    std::cout << "ScavTrap - Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(100,50,20,name)
{
    std::cout << "ScavTrap - Name constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap()
{
     std::cout << "Scav Trap  - Copy constructor called for: " << m_name << std::endl;
    *this = copy;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Scav Trap - Destructor called for the object: " << m_name << std::endl;
}

void ScavTrap::guardGate()
{
	if(this->m_energy > 0 && this->m_hit > 0)
    {
        this->m_energy--;
        std::cout << "Scav trap " << this->m_name << " is now in Gate keeper mode" <<std::endl;
    }
    else if (this->m_energy == 0)
        std::cout << "Not enough energy point to pass in Gate keeper mode." << std::endl;
    else
        std::cout << "Cannot do this action as " << this->m_name << " is dead" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if(this->m_energy > 0 && this->m_hit > 0)
    {
        this->m_energy--;
        std::cout << "Scav trap " << this->m_name << " attacks " << target << " causing " << this->m_damage << " points of damage!" <<std::endl;
    }
    else if (this->m_energy == 0)
        std::cout << "Not enough energy point to attack." << std::endl;
    else
        std::cout << "Cannot attack as " << this->m_name << " is dead" << std::endl;
}