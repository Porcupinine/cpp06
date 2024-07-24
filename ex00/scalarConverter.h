/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   scalarConverter.h                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lpraca-l@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/29 11:16:41 by lpraca-l      #+#    #+#                 */
/*   Updated: 2024/05/29 11:16:41 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP06_SCALARCONVERTER_H
#define CPP06_SCALARCONVERTER_H


#include <string>

class scalarConverter {
	public:
		scalarConverter() = delete;
		~scalarConverter() = delete;
		scalarConverter(const scalarConverter& cp) = delete;
		scalarConverter& operator=(const scalarConverter& cp) = delete;
		static void convert (std::string& x);
};

//TODO check overflow int

#endif //CPP06_SCALARCONVERTER_H
