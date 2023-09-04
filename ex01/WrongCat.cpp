/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:25:33 by khorike           #+#    #+#             */
/*   Updated: 2023/09/04 17:48:18 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	brain = new Brain();
	copied = true;
	type = "WrongCat";
	std::cout << "WrongCat constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	brain = other.brain;
	std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
	{
		WrongAnimal::operator=(other);
		brain = other.brain;  // 浅いコピー
	}
	std::cout << "WrongCat assignment operator called." << std::endl;
	return *this;
}

WrongCat::~WrongCat()
{
	if (!copied)
	{
		delete brain;
	}
	std::cout << "WrongCat destructor called." << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong Meow!" << std::endl;
}

Brain* WrongCat::getBrainAddress() const
{
	return brain;
}