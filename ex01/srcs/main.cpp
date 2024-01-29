/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:57:40 by motoko            #+#    #+#             */
/*   Updated: 2024/01/29 17:42:27 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	//ClapTrap	p1;
	//ClapTrap	p2("toto", 10, 10, 3);
	
	ScavTrap	s1;
	ScavTrap	s2("jacky", 100, 50, 20);
	std::cout << "s1 = hp " << s1.getHp() << " ep : " << s1.getEp() << "ad : " << s1.getAttackDamage() << std::endl;
	std::cout << "s2 = hp " << s2.getHp() << " ep : " << s2.getEp() << "ad : " << s2.getAttackDamage() << std::endl;
	s1.guardGate();
	
	/*
	p1.attack(p2.getName());
	p2.takeDamage(p1.getAttackDamage());
	std::cout << "p1 = hp " << p1.getHp() << " ep : " << p1.getEp() << std::endl;
	std::cout << "p2 = hp " << p2.getHp() << " ep : " << p2.getEp() << std::endl;

	p2.attack(p1.getName());
	p1.takeDamage(p2.getAttackDamage());
	std::cout << "p1 = hp " << p1.getHp() << " ep : " << p1.getEp() << std::endl;
	std::cout << "p2 = hp " << p2.getHp() << " ep : " << p2.getEp() << std::endl;

	p1.beRepaired(1);
	p2.beRepaired(2);
	std::cout << "p1 = hp " << p1.getHp() << " ep : " << p1.getEp() << std::endl;
	std::cout << "p2 = hp " << p2.getHp() << " ep : " << p2.getEp() << std::endl;
	*/
	return (0);
}
