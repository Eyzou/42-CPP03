
#include "ClapTrap.h"
#include "FlagTrap.h"
#include "ScavTrap.h"
#include "DiamondTrap.h"

int main ()
{
    std::cout << "****TESTING**** " << std::endl;
    std::cout << "Flag trap Poulet is coming... " << std::endl;

    DiamondTrap flag("Poulet");

    flag.highFivesGuys();
    std::cout << std::endl;

    std::cout << "****END**** " << std::endl;

    return (0);
}