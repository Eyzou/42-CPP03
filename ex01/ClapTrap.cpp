
#include "ClapTrap.h"

ClapTrap::ClapTrap(): m_name("Default"), m_hit(10), m_energy(10), m_damage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): m_name(name), m_hit(10), m_energy(10), m_damage(0)
{
    std::cout << "Name constructor called for: " << m_name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    *this = src;
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called for the object: " << m_name << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
    if(this != &rhs){
	std::cout << "Assignement operator is called" << std::endl;
	this->m_name = rhs.m_name;
	this->m_hit = rhs.m_hit;
	this->m_energy = rhs.m_energy;
	this->m_damage = rhs.m_damage;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->m_energy > 0 && this->m_hit > 0)
    {
        this->m_energy--;
        std::cout << "Clap trap " << this->m_name << " attacks " << target << " causing " << this->m_damage << " points of damage!" <<std::endl;
    }
    else if (this->m_energy == 0)
        std::cout << "Not enough energy point to attack." << std::endl;
    else
        std::cout << "Cannot attack as " << this->m_name << " is dead" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->m_hit > amount)
    {
        this->m_hit -= amount;
        std::cout << "Clap trap " << this->m_name << " takes " << amount << " points of damage!" <<std::endl;
    }
    else if (this->m_hit > 0)
    {
        this->m_hit = 0;
        std::cout << "Clap trap " << this->m_name << " takes " << amount << " points of damage!" <<std::endl;
    }
    else
        std::cout << "Clap trap " << this->m_name << " is already dead!" <<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->m_energy > 0 && this->m_hit > 0 && this->m_hit + amount <= 10)
    {
        this->m_hit += amount;
        this->m_energy--;
        std::cout << "Clap trap " << this->m_name << " gains " << amount << " hit points back!" <<std::endl;
    }
    else if (this->m_energy == 0)
        std::cout << "Cannot be repaired has not enough energy point" << std::endl;
    else if (this->m_hit == 0)
        std::cout << "Cannot be repaired has " << this->m_name << " is dead" << std::endl;
    else if (this->m_hit == 10)
        std::cout << "Cannot be repaired has " << this->m_name << " is already in good health!" << std::endl;
}
