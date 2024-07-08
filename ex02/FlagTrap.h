
#ifndef FLAGTRAP_H
#define FLAGTRAP_H


#include <string>
#include <iostream>

class FlagTrap : public ClapTrap {

    public:
        FlagTrap();
        FlagTrap(std::string name);
        FlagTrap(const FlagTrap &copy);
        ~FlagTrap();

		ClapTrap& operator=(ClapTrap const &rhs);

        void highFivesGuys();
};

#endif //FLAGTRAP_H
