#pragma once
#ifndef PAROT_HPP
#define PAROT_HPP
#include "Pets.hpp"
#include <iostream>

class Parot : Pets
{
public:
	Parot() {}
	Parot(std::string name, int age, std::string breed, std::string gender, std::string color)
	{
		this->color;
	}

	
private:
	std::string color;
};

#endif // !PAROT_HPP

