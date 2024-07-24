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
#include <string>
#include <iostream>

/* ************************************************************************** */

int main () {
	std::string str = "42.0f";
	float x = 42.0f;
	std::cout<<"type: "<< typeid(x).name()<<"\n";
}