

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "Wrong No type";
	std::cout << "WrongAnimal constructor called with this type : " << type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal copy constructor called to copy from this type : " << obj.type << std::endl;
	*this = obj;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal assignation operator called to assign from this type : " << obj.type << std::endl;
	if (this != &obj)
		type = obj.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called with type : " << type << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal type : " << type << " makes a sound" << std::endl;
}


