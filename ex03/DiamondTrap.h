
#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include <string>
#include <iostream>
#include "ScavTrap.h"
#include "FragTrap.h"

class DiamondTrap: public FragTrap, public ScavTrap
 {
    public:
		DiamondTrap();
		DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &copy);
        virtual ~DiamondTrap();
        DiamondTrap &operator=(const DiamondTrap &rhs);

		void whoAmI() const;
		void attack(const std::string &target);
		void display() const;

	private:
		std::string m_name;

};


#endif //DIAMONDTRAP_H
