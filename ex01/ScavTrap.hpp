/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:10:39 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/23 20:12:21 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_H
#define SCAVTRAP_H
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    public :
    ScavTrap();
    ScavTrap(std :: string n);
    ScavTrap(const ScavTrap &obj);
    ScavTrap &operator=(const ScavTrap &obj);
    void guardGate();
    void attack(const std::string& target);
    void print()
    {
        std :: cout << this->name << std :: endl;
        std :: cout << this->hit_point << std :: endl;
        std :: cout << this->energy_point << std :: endl;
        std :: cout << this->attack_demage << std :: endl;
    }
     ~ScavTrap();
};

#endif