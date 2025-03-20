#pragma once
#ifndef PETS_HPP
#define PETS_HPP
#include <string>

class Pets
{
public:
	Pets() {};
	Pets(std::string name, int age, std::string breed, std::string gender)
	{
		this->name = name;
		this->age = age;
		this->breed = breed;
	}

private: 
	std::string name;
	int age;
	std::string breed;
	std::string gender;

};

#endif // !PETS_HPP
