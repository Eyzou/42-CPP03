
#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "ClapTrap.h"
#include "FlagTrap.h"
#include "ScavTrap.h"

#include <string>
#include <iostream>

class DiamondTrap : Public ClapTrap {

    public:
		DiamondTrap();
        DiamondTrap(std::string name + "_clap_name");
        DiamondTrap(const DiamondTrap &copy);
        ~DiamondTrap();

		void attack(const std::string& target);
		void whoAmI();

    protected:
    	std::string m_name;
};



#endif //DIAMONTRAP_H
