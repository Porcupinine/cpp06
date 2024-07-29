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

namespace {
	void gotFloat(std::string& x) {
		if (x == "+inff" || x == "-inff" || x == "nanf") {
			std::cout << "char: impossible\n";
			std::cout << "int: impossible\n";
			std::cout << "float: "<<x<<"\n";
			x.pop_back();
			std::cout << "double: "<<x<<"\n";
			return;
		}
		float value = 0;
		try{
			value = std::stof(x);
		}
		catch (const std::exception &ex) {
			std::cout<<"Impossible conversion\n";
			return;
		}
		if (isascii(static_cast<int>(value))) {
			if (isprint(static_cast<int>(value)))
				std::cout << "char: " << static_cast<char>(value) << "\n";
			std::cout << "char: non displayable\n";
		} else
			std::cout<<"char: impossible\n";
		if (value <= 2147483647.0f && value >= -2147483648.0f)
			std::cout<<"int: "<<static_cast<int>(value)<<"\n";
		else
			std::cout<<"int: impossible\n";
		std::cout<<"float: "<<value<<"f\n";
		std::cout<<"double: "<<static_cast<double >(value)<<"\n";
	}
	void gotChar(std::string& x) {
		std::cout<<"char: "<<x<<"\n";
		std::cout<<"int: "<<static_cast<int>(x[0])<<"\n";
		std::cout<<"float: "<<static_cast<float >(x[0])<<"\n";
		std::cout<<"double: "<<static_cast<double >(x[0])<<"\n";
	}
	void gotInt(std::string& x) {
		int value = 0;
		try{
			value = std::stoi(x);
		}
		catch (const std::exception &ex) {
			std::cout<<"Impossible conversion\n";
			return;
		}
		if (isascii(static_cast<int>(value))) {
			if (isprint(static_cast<int>(value)))
				std::cout << "char: " << static_cast<char>(value) << "\n";
			std::cout << "char: non displayable\n";
		} else
			std::cout<<"char: impossible\n";
		std::cout<<"int: "<<value<<"\n";
		std::cout<<"float: "<<static_cast<float >(value)<<".0f\n";
		std::cout<<"double: "<<static_cast<double >(value)<<".0\n";
	}
	void gotDouble(std::string& x) {
		if (x == "+inf" || x == "-inf" || x == "nan") {
			std::cout << "char: impossible\n";
			std::cout << "int: impossible\n";
			x.append("f");
			std::cout << "float: "<<x<<"\n";
			x.pop_back();
			std::cout << "double: "<<x<<"\n";
			return;
		}
		double value = 0;
		try{
			value = std::stod(x);
		}
		catch (const std::exception &ex) {
			std::cout<<"Impossible conversion\n";
			return;
		}
		if (isascii(static_cast<int>(value))) {
			if (isprint(static_cast<int>(value)))
				std::cout << "char: " << static_cast<char>(value) << "\n";
			std::cout << "char: non displayable\n";
		} else
			std::cout<<"char: impossible\n";
		if (value <= 2147483647.0f && value >= -2147483648.0f)
			std::cout<<"int: "<<static_cast<int>(value)<<"\n";
		else
			std::cout<<"int: impossible\n";
		if (value <= 3.40282e+38 && value >= 1.17549e-38)
			std::cout<<"float: "<<static_cast<float>(value)<<"\n";
		else
			std::cout<<"float: impossible\n";
		std::cout<<"double: "<<value<<"\n";
	}
	bool allDigit(std::string& x) {
		for(size_t it = 0; it < x.length(); it++){
			if (isdigit(x[it]) == 0)
				return false;
		}
		return true;
	}
	void checkType(std::string &x) {
		if (x == "+inff" || x == "-inff" || x == "nanf"){
			gotFloat(x);
			return;
		}
		if (x == "+inf" || x == "-inf" || x == "nan"){
			gotDouble(x);
			return;
		}
		if (x.length() == 1 && !isdigit(x[0])) {
			gotChar(x);
			return;
		}
		if (allDigit(x)) {
			gotInt(x);
			return;
		}
		size_t f = 0;
		size_t e = 0;
		size_t dot = 0;
		size_t signal = 0;
		std::string copy = x;
		for (int it = static_cast<int>(copy.length()); it >= 0; it--){
			if (copy[it] == 'f') {
				f++;
				copy[it] = '0';
			}
			if(copy[it] == 'e') {
				e++;
				copy[it] = '0';
			}
			if(copy[it] == '.') {
				dot++;
				copy[it] = '0';
			}
			if (copy[it] == '-' || copy[it] == '+') {
				signal++;
				copy[it] = '0';
			}
		}
		if (allDigit(copy) && f == 0 && dot <= 0 && e <= 0 && signal <= 1) {
			gotInt(x);
			return;
		}
		if (allDigit(copy) && f == 1 && dot <= 2 && e <= 1 && signal <= 2) {
			gotFloat(x);
			return;
		}
		if (allDigit(copy) && f == 0 && dot <= 2 && e <= 1 && signal <= 2) {
			gotDouble(x);
			return;
		}
		std::cout<<"Impossible conversion\n";
	}
}

void scalarConverter::convert(std::string& x) {
	checkType(x);
}
