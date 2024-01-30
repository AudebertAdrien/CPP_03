/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:57:40 by motoko            #+#    #+#             */
/*   Updated: 2024/01/30 16:05:12 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap f1;
	FragTrap f2("Fragy", 100, 100, 30);
	std::cout << "name : " << f1.getName() << " f1 = hp " << f1.getHp() << " ep : " << f1.getEp() << " ad : " << f1.getAttackDamage() << std::endl;
	std::cout << "name : " << f2.getName() << " f2 = hp " << f2.getHp() << " ep : " << f2.getEp() << " ad : " << f2.getAttackDamage() << std::endl;
	f1.highFivesGuys();
	return (0);
}
