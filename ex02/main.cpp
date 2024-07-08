/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:00:01 by ehamm             #+#    #+#             */
/*   Updated: 2024/07/08 11:00:04 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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