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