/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:59:49 by ehamm             #+#    #+#             */
/*   Updated: 2024/07/08 10:59:51 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ClapTRAP_H
# define ClapTRAP_H

#include <string>
#include <iostream>

class ClapTrap {

    public:
        ClapTrap();
        ClapTrap(unsigned int hit, unsigned int energy, unsigned int dmg, std::string name);
        ClapTrap(const ClapTrap &src);
        ~ClapTrap();

       void attack(const std::string& target);
       void takeDamage(unsigned int amount);
       void beRepaired(unsigned int amount);

    protected:
        std::string m_name;
        int m_hit;
        int m_energy;
        int m_damage;

};

#endif //ClapTRAP_H
