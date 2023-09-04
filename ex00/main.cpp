/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:25:37 by khorike           #+#    #+#             */
/*   Updated: 2023/09/04 16:09:21 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal* meta = new Animal();
	Animal* j = new Dog();
	Animal* i = new Cat();
	WrongAnimal* wc = new WrongCat();
	WrongCat* wcat = new WrongCat();
	WrongAnimal* wa = new WrongAnimal();

	std::cout << j->getType() << ": ";
	j->makeSound();

	std::cout << i->getType() << ": ";
	i->makeSound();

	std::cout << wcat->getType() << ": ";
	wcat->makeSound();

	std::cout << wc->getType() << ": ";
	wc->makeSound();

	std::cout << wa->getType() << ": ";
	wa->makeSound();

	std::cout << meta->getType() << ": ";
	meta->makeSound();

	delete j;
	delete i;
	delete wcat;
	delete wc;
	delete wa;
	delete meta;

	return 0;
}

// __attribute__((destructor)) static void destructor()
// {
// 	system("leaks -q ex00");
// }
