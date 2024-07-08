
#include "ClapTrap.h"
#include "ScavTrap.h"

int main ()
{
    std::cout << "****TESTING**** " << std::endl;
    std::cout << "Scav Trap Rondoudou is coming... " << std::endl;

    ScavTrap scav("Rondoudou");

    scav.guardGate();
    scav.attack("peppa pig sister");
    std::cout << std::endl;
    scav.takeDamage(10);
    scav.takeDamage(100);
    scav.takeDamage(1);

    std::cout << "Scav Trap Mioche is coming... " << std::endl;
    ScavTrap scav2("Mioche");
    for(int i = 0; i < 51; i++)
        scav2.guardGate();
    std::cout << "****END**** " << std::endl;

    return (0);
}