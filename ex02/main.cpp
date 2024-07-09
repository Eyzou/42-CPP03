

#include "ClapTrap.h"
#include "FragTrap.h"
#include "ScavTrap.h"

int main ()
{
    std::cout << "****TESTING**** " << std::endl;
    std::cout << "Frag trap Poulet is coming... " << std::endl;

    FragTrap Frag("Poulet");

    std::cout << std::endl;
    Frag.display();
    std::cout << std::endl;
    Frag.highFivesGuys();
    std::cout << std::endl;
    std::cout << "****END**** " << std::endl;

    return (0);
}