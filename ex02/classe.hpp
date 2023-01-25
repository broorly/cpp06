/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classe.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:08:07 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/25 21:04:34 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
class  Base
{
public:
	virtual ~Base();
};

class A: public Base{

};
class B: public Base{

};
class C: public Base{

};
void identify(Base* p);
void identify(Base& p);
Base * generate(void);
