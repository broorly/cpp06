/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:08:13 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/25 21:43:44 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>

typedef struct Data
{
	int x;
	int y;
	int z;

} Data; 
uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);