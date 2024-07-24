/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   scalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lpraca-l@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/29 11:16:28 by lpraca-l      #+#    #+#                 */
/*   Updated: 2024/05/29 11:16:28 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "scalarConverter.h"

void scalarConverter::convert(std::string& x) {

}

void castToChar(std::string& x) {
	//check if non displayable
	//anything between
//	if (isfloa(x))
	if (x.length() != 1)
		std::cout <<"char: impossible\n";
	else if (!isprint(x[0]))
		std::cout<<"Char: ot printable\n";

}

void castToInt(std::string& x) {
	//check if range
}

void castToFloat(std::string& x) {
	//check if range
	//-inff, +inff. nanf
}

void castToDouble(std::string& x) {
	//check if range
	//-inf, +nf, nan
}
