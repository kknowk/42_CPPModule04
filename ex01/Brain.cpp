/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:29:19 by khorike           #+#    #+#             */
/*   Updated: 2023/09/04 16:15:23 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called." << std::endl;
}

Brain::Brain(const Brain& other) {
    for (int i = 0; i < 100; i++) {
        ideas[i] = other.ideas[i];
    }
    std::cout << "Brain copy constructor called." << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
    if (this != &other) {
        for (int i = 0; i < 100; i++) {
            ideas[i] = other.ideas[i];
        }
    }
    std::cout << "Brain assignment operator called." << std::endl;
    return *this;
}

Brain::~Brain() {
    // デストラクタの内容
    // 特に何もしなくて良いが、メッセージを出力することが求められているので
    std::cout << "Brain destructor called." << std::endl;
}