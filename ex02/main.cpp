/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/29 14:32:55 by laura         #+#    #+#                 */
/*   Updated: 2024/07/29 14:32:55 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.h"

int main () {
	Base *x = generate();

	std::cout<<"Identify pointer\n";
	identify(x);
	std::cout<<"\nIdentify reference\n";
	identify(x);
	delete x;
}
