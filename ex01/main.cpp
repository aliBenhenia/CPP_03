/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:11:20 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/23 19:55:52 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap obj1("amine");
    ScavTrap obj2(obj1);
    obj1 = obj2;
    obj2.print();
    obj2.attack("nora");
    return 0;
}