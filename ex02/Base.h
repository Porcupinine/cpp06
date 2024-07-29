/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/29 12:06:13 by laura         #+#    #+#                 */
/*   Updated: 2024/07/29 12:06:13 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP06_BASE_H
#define CPP06_BASE_H


class Base {
public:
	virtual ~Base() = default;
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *generate();
void identify(Base* p);
void identify(Base& p);

#endif //CPP06_BASE_H
