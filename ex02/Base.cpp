/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/29 12:58:35 by laura         #+#    #+#                 */
/*   Updated: 2024/07/29 12:58:35 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <random>
#include <iostream>
#include "Base.h"

Base *generate() {
	std::random_device rd; // obtain a random number from hardware
	std::mt19937 gen(rd()); // seed the generator
	std::uniform_int_distribution<> distr(1, 3); // define the range
	int x = distr(gen);

	switch (x) {
		case 1:
			std::cout<<"----Type A created----\n\n";
			return (new A);
		case 2:
			std::cout<<"----Type B created----\n\n";
			return (new B);
		case 3:
			std::cout<<"----Type C created----\n\n";
			return (new C);
	}
	return nullptr;
}

void identify(Base* p) {
	if(dynamic_cast<A*>(p)) {
		std::cout << "Type A\n";
		return;
	}
	if(dynamic_cast<B*>(p)) {
		std::cout<<"Type B\n";
		return;
	}
	if(dynamic_cast<C*>(p)) {
		std::cout<<"Type C\n";
		return;
	}
	std::cout<<"It's not ABC\n";
}

void identify(Base& p) {
	try {
		dynamic_cast<A&>(p);
		std::cout << "Type A\n";
		return;
	}
	catch (std::exception& ex){
	}
	try {
		dynamic_cast<B&>(p);
		std::cout << "Type B\n";
		return;
	}
	catch (std::exception& ex){
	}
	try {
		dynamic_cast<C&>(p);
		std::cout << "Type C\n";
		return;
	}
	catch (std::exception& ex){
	}
}
