
#include "DiamondTrap.h"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap")
{
    this->m_name = "Default";
    this->m_hit = this->FragTrap::m_hit;
    this->m_energy = this->ScavTrap::m_energy;
    this->m_damage = this->FragTrap::m_damage;
	std::cout << "DiamonTrap - Default constructor called for : " << m_name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	this->m_name = name;
    this->m_hit = this->FragTrap::m_hit;
    this->m_energy = this->ScavTrap::m_energy;
    this->m_damage = this->FragTrap::m_damage;
	std::cout << "DiamonTrap - Name constructor called for : " << m_name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src): ClapTrap(src), FragTrap(src), ScavTrap(src)
{
    *this = src;
    std::cout << "DiamondTrap - Copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap- Destructor called for the object: " << m_name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs)
{
    std::cout << "Assignement operator (DiamondTrap) is called" << std::endl;
    this->m_name = rhs.m_name+ "_clap_trap";
    this->m_hit = rhs.m_hit;
    this->m_energy = rhs.m_energy;
    this->m_damage = rhs.m_damage;
    return *this;
}

void DiamondTrap::display() const
{
    std::cout << "Displaying informations of " << m_name << std::endl;
    std::cout << "hit: " << m_hit << std::endl;
    std::cout << "energy: " << m_energy << std::endl;
    std::cout << "damage: " << m_damage << std::endl;
}


void    DiamondTrap::whoAmI() const
{
    std::cout << "Hello I am : " << this->m_name << " and my Parent ClapTrap is "<< ClapTrap::m_name << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

std::ostream& operator<<(std::ostream &os,DiamondTrap const &src)
{
    src.display();
    return(os);
}