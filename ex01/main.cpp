/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:00:26 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/25 21:43:41 by mrafik           ###   ########.fr       */
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

	ptr.x = 99;
	raw  = serialize(&ptr);
	ptr = *deserialize(raw);
	std::cout<<ptr.x<<std::endl;
	return(0);
}