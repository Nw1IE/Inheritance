#pragma once
#ifndef DOG_HPP
#define DOG_HPP
#include "Pets.hpp"
#include <iostream>

class Dog : Pets
{
public:
	Dog() {}
	Dog(std::string name, int age, std::string breed, std::string gender, std::string color)
	{
		this->color;
	}
	
	
private:
	std::string color;
};

#endif