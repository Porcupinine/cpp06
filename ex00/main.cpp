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
	if(argc == 2) {
		std::string value = argv[1];
		scalarConverter::convert(value);
		return 0;
	}
	std::string str = "c";
	std::cout<<"-------Testing char conversion-------\n";
	std::cout<<"\nvalue: "<<str<<"\n";
	scalarConverter::convert(str);
	str = "*";
	std::cout<<"\nvalue: "<<str<<"\n";
	scalarConverter::convert(str);

	std::cout<<"\n-------Testing int conversion-------\n";
	str = "42";
	std::cout<<"\nvalue: "<<str<<"\n";
	scalarConverter::convert(str);
	str = "-42";
	std::cout<<"\nvalue: "<<str<<"\n";
	scalarConverter::convert(str);
	str = "2147483647";
	std::cout<<"\nvalue: "<<str<<" (max int)\n";
	scalarConverter::convert(str);
	str = "2147483648";
	std::cout<<"\nvalue: "<<str<<" (overflow max)\n";
	scalarConverter::convert(str);
	str = "-2147483648";
	std::cout<<"\nvalue: "<<str<<" (min int)\n";
	scalarConverter::convert(str);
	str = "-2147483649";
	std::cout<<"\nvalue: "<<str<<" (overflow min)\n";
	scalarConverter::convert(str);

	std::cout<<"\n-------Testing float conversion-------\n";
	str = "42.0f";
	std::cout<<"\nvalue: "<<str<<"\n";
	scalarConverter::convert(str);
	str = "-42.0f";
	std::cout<<"\nvalue: "<<str<<"\n";
	scalarConverter::convert(str);
	str = "3.40282e+38f";
	std::cout<<"\nvalue: "<<str<<" (max float)\n";
	scalarConverter::convert(str);
	str = "3.40282e+39f";
	std::cout<<"\nvalue: "<<str<<" (overflow max)\n";
	scalarConverter::convert(str);
	str = "-3.40282e+38f";
	std::cout<<"\nvalue: "<<str<<" (min float)\n";
	scalarConverter::convert(str);
	str = "-3.40282e+39f";
	std::cout<<"\nvalue: "<<str<<" (overflow min)\n";
	scalarConverter::convert(str);
	str = "inff";
	std::cout<<"\nvalue: "<<str<<"\n";
	scalarConverter::convert(str);
	str = "-inff";
	std::cout<<"\nvalue: "<<str<<"\n";
	scalarConverter::convert(str);
	str = "nanf";
	std::cout<<"\nvalue: "<<str<<"\n";
	scalarConverter::convert(str);

	std::cout<<"\n-------Testing double conversion-------\n";
	str = "42.0";
	std::cout<<"\nvalue: "<<str<<"\n";
	scalarConverter::convert(str);
	str = "-42.0";
	std::cout<<"\nvalue: "<<str<<"\n";
	scalarConverter::convert(str);
	str = "1.79769e+308";
	std::cout<<"\nvalue: "<<str<<" (max double)\n";
	scalarConverter::convert(str);
	str = "1.79769e+309";
	std::cout<<"\nvalue: "<<str<<" (overflow max)\n";
	scalarConverter::convert(str);
	str = "-1.79769e+308";
	std::cout<<"\nvalue: "<<str<<" (min double)\n";
	scalarConverter::convert(str);
	str = "-1.79769e+309";
	std::cout<<"\nvalue: "<<str<<" (overflow min)\n";
	scalarConverter::convert(str);
	str = "inf";
	std::cout<<"\nvalue: "<<str<<"\n";
	scalarConverter::convert(str);
	str = "-inf";
	std::cout<<"\nvalue: "<<str<<"\n";
	scalarConverter::convert(str);
	str = "nan";
	std::cout<<"\nvalue: "<<str<<"\n";
	scalarConverter::convert(str);
}