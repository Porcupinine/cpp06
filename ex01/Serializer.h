//
// Created by laura on 27-7-24.
//

#ifndef CPP06_SERIALIZER_H
#define CPP06_SERIALIZER_H


#include <cstdint>
#include "Data.h"

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
