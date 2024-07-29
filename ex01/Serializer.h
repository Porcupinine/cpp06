/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serializer.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/27 13:54:45 by laura         #+#    #+#                 */
/*   Updated: 2024/07/27 13:54:45 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP06_SERIALIZER_H
#define CPP06_SERIALIZER_H

#include <cstdint>

struct Data {
	int n {42};
	char c {'*'};
	float f {42.2f};
};

class Serializer {
public:
	Serializer() = delete;
	~Serializer() = delete;
	Serializer(Serializer& cp) = delete;
	Serializer& operator=(Serializer& cp) = delete;

	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};


#endif //CPP06_SERIALIZER_H
