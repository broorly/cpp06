/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:00:26 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/25 17:38:44 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"cast.hpp"


uintptr_t serialize(Data* ptr){
	return(reinterpret_cast<uintptr_t>(ptr));
}
Data* deserialize(uintptr_t raw){
	return(reinterpret_cast<Data*>(raw));
}

int main()
{
	Data ptr;
	uintptr_t raw;

	//ptr.x= -888 ;
	raw  = serialize(&ptr);
	std::cout<<raw<< "\n";
	ptr = *deserialize(raw);
	std::cout<<raw<<"\n";
	
	return(0);
}