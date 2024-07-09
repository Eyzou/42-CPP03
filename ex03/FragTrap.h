
#ifndef FragTRAP_H
#define FragTRAP_H

#include <string>
#include "ClapTrap.h"

class FragTrap : virtual public ClapTrap {

    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &copy);
        virtual ~FragTrap();

		FragTrap& operator=(FragTrap const &rhs);

        void highFivesGuys();
//        void display();
};

#endif //FragTRAP_H
