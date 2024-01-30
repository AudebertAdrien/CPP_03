/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:57:40 by motoko            #+#    #+#             */
/*   Updated: 2024/01/30 15:49:11 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	s1;
	ScavTrap	s2("jacky", 100, 50, 20);

	std::cout << "name : " << s1.getName() << " s1 = hp " << s1.getHp() << " ep : " << s1.getEp() << " ad : " << s1.getAttackDamage() << std::endl;
	std::cout << "name : " << s2.getName() << " s2 = hp " << s2.getHp() << " ep : " << s2.getEp() << " ad : " << s2.getAttackDamage() << std::endl;

	s1.guardGate();
	return (0);
}
