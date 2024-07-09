
#include "DiamondTrap.h"

int main ()
{
    std::cout << "****TESTING**** " << std::endl;
    std::cout << "Frag trap Poulet is coming... " << std::endl;

    DiamondTrap poulet("Poulet");

    poulet.display();
    poulet.attack("peppa pig");
    poulet.takeDamage(9);
    poulet.display();

    std::cout << std::endl;

    std::cout << "****END**** " << std::endl;

    return (0);
}