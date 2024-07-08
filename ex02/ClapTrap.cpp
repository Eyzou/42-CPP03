/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:59:42 by ehamm             #+#    #+#             */
/*   Updated: 2024/07/08 10:59:45 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(): m_name("Default"), m_hit(10), m_energy(10), m_damage(0)
{
    std::cout << "Clap Trap -Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(unsigned int hit, unsigned int energy, unsigned int dmg, std::string name): m_name(name), m_hit(hit), m_energy(energy), m_damage(dmg)
{
    std::cout << "Clap Trap - Name constructor called for: " << m_name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << "Clap Trap - Copy constructor called" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Clap Trap - Destructor called for the object: " << m_name << std::endl;
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
    if(this->m_hit > (int)amount)
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
