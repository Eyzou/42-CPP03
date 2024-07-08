/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamonTrap.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:00:26 by ehamm             #+#    #+#             */
/*   Updated: 2024/07/08 11:01:51 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DIAMONTRAP_H
#define DIAMONTRAP_H

#include "ClapTrap.h"
#include "FlagTrap.h"
#include "ScavTrap.h"

#include <string>
#include <iostream>

class DiamonTrap : Public ClapTrap {

    public:

    private:
    std::string m_name;
};



#endif //DIAMONTRAP_H
