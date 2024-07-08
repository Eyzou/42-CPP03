
#include "DiamondTrap.h"
#include "ClapTrap.h"

DiamondTrap::DiamondTrap() : m_name(ClapTrap:: name), m_hit(FlagTrap:: m_hit), m_energy(ScavTrap:: m_energy), m_damage(FlagTrap:: m_damage)
{
    std::cout << "DiamonTrap - Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name +"_clap_name")
{
    std::cout << "DiamonTrap - Name constructor called" << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
    std::cout << "DiamondTrap - Copy constructor called" << std::endl;
    *this = src;
} 
DiamondTrap::~DiamondTrap()
{
	std::cout << "Clap Trap - Destructor called for the object: " << m_name << std::endl;
}
void DiamondTrap::attack(const std::string& target)
{
	ClapTrap::attack(target);
}