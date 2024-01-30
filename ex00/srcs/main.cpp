/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:57:40 by motoko            #+#    #+#             */
/*   Updated: 2024/01/30 16:13:26 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	p1;
	ClapTrap	p2("toto", 10, 10, 3);
	
	p1.attack(p2.getName());
	p2.takeDamage(p1.getAttackDamage());
	std::cout << "name : " << p1.getName() << " p1 = hp " << p1.getHp() << " ep : " << p1.getEp() << std::endl;
	std::cout << "name : " << p2.getName() << " p2 = hp " << p2.getHp() << " ep : " << p2.getEp() << std::endl;

	p2.attack(p1.getName());
	p1.takeDamage(p2.getAttackDamage());
	std::cout << "name : " << p1.getName() << " p1 = hp " << p1.getHp() << " ep : " << p1.getEp() << std::endl;
	std::cout << "name : " << p2.getName() << " p2 = hp " << p2.getHp() << " ep : " << p2.getEp() << std::endl;

	p1.beRepaired(1);
	p2.beRepaired(2);
	std::cout << "name : " << p1.getName() << " p1 = hp " << p1.getHp() << " ep : " << p1.getEp() << std::endl;
	std::cout << "name : " << p2.getName() << " p2 = hp " << p2.getHp() << " ep : " << p2.getEp() << std::endl;

	return (0);
}
