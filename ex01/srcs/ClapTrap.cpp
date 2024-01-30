/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:57:20 by motoko            #+#    #+#             */
/*   Updated: 2024/01/30 15:50:56 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

static int i = 1;

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap Default Constructor called" << std::endl;
	std::stringstream	sstm;
	sstm << "ClapTrap n° : " << i++ << " ";
	_name = sstm.str();
	_hp = 100;
	_ep = 50;
	_attackDamage = 20;
}

ClapTrap::ClapTrap(std::string name, int hp, int ep, int attackDamage) : _name(name), _hp(hp), _ep(ep), _attackDamage(attackDamage) {
	std::cout << "ClapTrap Constructor with Params called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
		*this = src;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &src) {
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_name = src.getName();
		this->_hp = src.getHp();
		this->_ep = src.getEp();
		this->_attackDamage = src.getAttackDamage();
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor called" << std::endl;
}

/* Behevoir */

void ClapTrap::attack(const std::string &target) {
	if (this->_ep - DECREMENT_EP < 0)
	{
		std::cout << "Not enough energie point!" << std::endl;
		return ;
	}
	std::cout <<"ClapTrap " << this->_name << " attack " << std::endl;
	this->_ep -= DECREMENT_EP;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_ep - DECREMENT_EP < 0)
	{
		std::cout << "Not enough energie point!" << std::endl;
		return ;
	}
	std::cout << "causing " << amount << " points of damage to " << this->_name << std::endl;
	this->_hp -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_ep - DECREMENT_EP < 0)
	{
		std::cout << "Not enough energie point!" << std::endl;
		return ;
	}
	std::cout <<"ClapTrap " << this->_name << " repair " << amount << std::endl;
	this->_hp += amount;
	this->_ep -= DECREMENT_EP;
}

/* Getter */

std::string	ClapTrap::getName() const {
	//std::cout << "getName called" << std::endl;
	return (this->_name);
}

int	ClapTrap::getHp() const {
	//std::cout << "getHp called" << std::endl;
	return (this->_hp);
}

int	ClapTrap::getEp() const {
	//std::cout << "getEp called" << std::endl;
	return (this->_ep);
}

int	ClapTrap::getAttackDamage() const {
	//std::cout << "getAttackDamage called" << std::endl;
	return (this->_attackDamage);
}
