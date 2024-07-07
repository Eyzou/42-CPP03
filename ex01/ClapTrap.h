//
// Created by eyza on 05/07/24.
//

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap {

    public:
        ClapTrap();
        ClapTrap(unsigned int hit, unsigned int energy, unsigned int dmg, std::string name);
        ClapTrap(const ClapTrap &src);
        ~ClapTrap();

       void attack(const std::string& target);
       void takeDamage(unsigned int amount);
       void beRepaired(unsigned int amount);

    protected:
        std::string m_name;
        int m_hit;
        int m_energy;
        int m_damage;

};

#endif //CLAPTRAP_H
