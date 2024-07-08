/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:59:08 by ehamm             #+#    #+#             */
/*   Updated: 2024/07/08 10:59:10 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.h"

int main ()
{
    ClapTrap clap1("elo la goat");

    std::cout << "****TESTING**** " << std::endl;
    std::cout << "First ClapTrap name is playing " << std::endl;
    clap1.attack("peppa pig");
    clap1.takeDamage(8);
    clap1.takeDamage(3);
    clap1.beRepaired(1);
    clap1.attack("peppa pig 2");

    std::cout << std::endl;
    std::cout <<"Then Default ClapTrap is playing" << std::endl;
    ClapTrap clap2;
    clap2.beRepaired(1);
    clap2.attack("peppa pig sister");
    clap2.takeDamage(5);
    clap2.beRepaired(5);
    std::cout << "****END**** " << std::endl;


    return (0);
}