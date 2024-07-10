
#include "ScavTrap.h"
#include "ClapTrap.h"

ScavTrap::ScavTrap() : ClapTrap("Default")
{
    std::cout << "ScavTrap - Default constructor called for : " << m_name << std::endl;
    this->m_hit = 100;
    this->m_energy = 50;
    this->m_damage = 20;
    this->m_guardMode = false;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap - Name constructor calledfor : " << m_name << std::endl;
    this->m_hit = 100;
    this->m_energy = 50;
    this->m_damage = 20;
    this->m_guardMode = false;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap()
{
    *this = copy;
    std::cout << "Scav Trap  - Copy constructor called for: " << m_name << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Scav Trap - Destructor called for the object: " << m_name << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
    if(this != &rhs){
   std::cout << "Assignement operator (ScavTrap) is called" << std::endl;
   this->m_name = rhs.m_name;
   this->m_hit = rhs.m_hit;
   this->m_energy = rhs.m_energy;
   this->m_damage = rhs.m_damage;
   this->m_guardMode = rhs.m_guardMode;
   }
   return *this;
}

void ScavTrap::guardGate()
{
	if(this->m_energy > 0 && this->m_hit > 0 && this->m_guardMode == false)
    {
        this->m_energy--;
	    this->m_guardMode = true;
        std::cout << "Scav trap " << this->m_name << " is now in Gate keeper mode" <<std::endl;
    }
    else if (this->m_energy == 0)
        std::cout << "Not enough energy point to pass in Gate keeper mode." << std::endl;
    else if (this->m_guardMode == true)
        std::cout << "Scav Trap is already in Gate keeper mode" << std::endl;
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