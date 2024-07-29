/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/29 10:45:51 by laura         #+#    #+#                 */
/*   Updated: 2024/07/29 10:45:51 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.h"

int main () {
	Data *x = new Data;

	std::cout<<"Original data\n";
	std::cout<<"Data: "<<x<<"  data->c: "<<x->c<<"  data->f: "<<x->f<<"  data->n: "<<x->n<<"\n";
	x->n = 0;
	x->f = 0;
	x->c = '0';
	std::cout<<"Changed data\n";
	std::cout<<"Data: "<<x<<"  data->c: "<<x->c<<"  data->f: "<<x->f<<"  data->n: "<<x->n<<"\n";
	uintptr_t uPtr = Serializer::serialize(x);
	std::cout<<"uPtr: "<<uPtr<<"\n";
	Data *y = Serializer::deserialize(uPtr);
	std::cout<<"New data\n";
	std::cout<<"Data: "<<y<<"  data->c: "<<y->c<<"  data->f: "<<y->f<<"  data->n: "<<y->n<<"\n";
	delete x;
}
