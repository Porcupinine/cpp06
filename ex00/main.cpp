/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lpraca-l@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/24 15:50:44 by lpraca-l      #+#    #+#                 */
/*   Updated: 2024/07/24 15:50:44 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "scalarConverter.h"

int main (int argc, char **argv) {
	if(argc != 2)
		std::cout<<"Please insert value\n";
	std::string value = argv[1];
	scalarConverter::convert(value);
}