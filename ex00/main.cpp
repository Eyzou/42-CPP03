
#include "ClapTrap.h"

int main ()
{
    ClapTrap clap1("elo la goat");

    std::cout << "****TESTING**** " << std::endl;
    clap1.attack("peppa pig");
    clap1.takeDamage(8);
    clap1.takeDamage(3);
    clap1.beRepaired(1);
    clap1.attack("peppa pig 2");

    std::cout << std::endl;
    ClapTrap clap2;
    clap2.beRepaired(1);
    clap2.attack("peppa pig sister");
    clap2.takeDamage(5);
    clap2.beRepaired(5);
    std::cout << "****END**** " << std::endl;


    return (0);
}