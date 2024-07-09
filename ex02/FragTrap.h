
#ifndef FragTRAP_H
#define FragTRAP_H

#include <string>
#include "ClapTrap.h"

class FragTrap : public ClapTrap {

    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &copy);
        ~FragTrap();

		FragTrap& operator=(FragTrap const &rhs);

        void highFivesGuys();
        void display();
};

#endif //FragTRAP_H
