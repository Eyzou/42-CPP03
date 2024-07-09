

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <string>
#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &copy);
		~ScavTrap();

		ScavTrap& operator=(ScavTrap const &rhs);

        void guardGate();
		void attack(const std::string& target);

	private:
		bool m_guardMode;
};

#endif //SCAVTRAP_H
