//
// Created by eyza on 05/07/24.
//

#include "ClapTrap.h"
#include "FlagTrap.h"
#include "ScavTrap.h"

int main ()
{
    std::cout << "****TESTING**** " << std::endl;
    std::cout << "Flag trap Poulet is coming... " << std::endl;

    FlagTrap flag("Poulet");

    flag.highFivesGuys();
    std::cout << std::endl;

    std::cout << "****END**** " << std::endl;

    return (0);
}