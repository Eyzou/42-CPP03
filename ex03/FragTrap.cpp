
#include "FragTrap.h"

FragTrap::FragTrap() : ClapTrap("Default")
{
    std::cout << "FragTrap - Default constructor called for : " << m_name << std::endl;
    this->m_hit = 100;
    this->m_energy = 100;
    this->m_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap - Name constructor called for: " << m_name << std::endl;
    this->m_hit = 100;
    this->m_energy = 100;
    this->m_damage = 30;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap()
{
    *this = copy;
    std::cout << "Frag Trap  - Copy constructor called for: " << m_name << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Frag Trap - Destructor called for the object: " << m_name << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
    if(this != &rhs){
    std::cout << "Assignement (FragTrap) operator is called" << std::endl;
    this->m_name = rhs.m_name;
    this->m_hit = rhs.m_hit;
    this->m_energy = rhs.m_energy;
    this->m_damage = rhs.m_damage;
    }
    return *this;
}

void FragTrap::highFivesGuys()
{
    std::cout << m_name << " sends a positive high fives request" << std::endl;
}

//Testing display information

/*void FragTrap::display()
{
    std::cout << "Displaying informations of " << m_name << std::endl;
    std::cout << "hit: " << m_hit << std::endl;
    std::cout << "energy: " << m_energy << std::endl;
    std::cout << "damage: " << m_damage << std::endl;
}*/