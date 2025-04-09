#pragma once
#ifndef CAT_HPP
#define CAT_HPP
#include "Pets.hpp"
#include <iostream>

class Cat : Pets
{
public:
	Cat() {}
	Cat(std::string name, int age, std::string breed, std::string gender, std::string color)
	{
		this->color;
	}

private:
	std::string color;
};

#endif // !CAT_HPP

