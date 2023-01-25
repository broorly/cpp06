/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classe.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:08:09 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/25 21:21:39 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include"classe.hpp"
 
 Base::~ Base()
{
	std::cout<<"Base destructor called "<<std::endl;
}

Base * generate(void)
{
	Base *base;
	std::srand(time(NULL));
    int random = std ::rand();
	if((random % 3) == 1)
		base = new A;
	else if((random % 3) == 2)
		base = new B;
	else
		base = new C;
	return(base);
}

void identify(Base* p)
{
	Base *tst;
	tst = dynamic_cast<A*>(p);
	if(tst)
	{
		std::cout<<"A"<<std::endl;
		return;
	}
	else
	{
		tst = dynamic_cast<B*>(p);
		if(tst)
		{
			std::cout<<"B"<<std::endl;
			return;
		}
		else
		{
			tst = dynamic_cast<C*>(p);
			if(tst)
			{
				std::cout<<"C"<<std::endl;
				return;
			}
		}
	}
	std::cout<<"ERROR"<<std::endl;
	return;
}
void identify(Base& p)
{
	try
	{
		A&a= dynamic_cast<A&>(p);
		(void) a;
		std::cout<<"A"<<std::endl;
	}
	catch(const std::exception& e)
	{
		try{
			B&b= dynamic_cast<B&>(p);
			(void) b;
			std::cout<<"B"<<std::endl;
		}
		catch(const std::exception& e)
		{
			try{
				C&c= dynamic_cast<C&>(p);
				(void) c;
				std::cout<<"C"<<std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout<<"ERROR"<<std::endl;
			}
		}
	}
	return;
}