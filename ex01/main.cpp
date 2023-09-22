/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:11:20 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/22 19:11:21 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ClapTrap.hpp"

int main()
{
    // Create ClapTrap objects
    ClapTrap clap1("Ali");
    ClapTrap clap2("khalid");

    // Test attacks and repairs
    clap1.attack("Enemy");
    clap2.takeDamage(5);
    clap1.beRepaired(3);
    clap2.attack("Friend");
    return 0;
}