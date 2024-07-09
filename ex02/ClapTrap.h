#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap {

    public:
        ClapTrap();
        ClapTrap(const ClapTrap &src);
		ClapTrap(std::string name);
		ClapTrap(unsigned int hit, unsigned int energy, unsigned int dmg, std::string name);
		
        ~ClapTrap();

		ClapTrap& operator=(ClapTrap const &rhs);

      	void attack(const std::string& target);
      	void takeDamage(unsigned int amount);
       	void beRepaired(unsigned int amount);

    protected:
        std::string m_name;
        unsigned int m_hit;
        unsigned int m_energy;
        unsigned int m_damage;
};

#endif //CLAPTRAP_H
