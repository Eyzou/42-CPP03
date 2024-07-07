//
// Created by eyza on 05/07/24.
//

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &copy);
		~ScavTrap();

        void guardGate();
		void attack(const std::string& target);
};

#endif //SCAVTRAP_H
