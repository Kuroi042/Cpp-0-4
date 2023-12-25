

#include "Animal.hpp"

Animal::Animal()
{
	type = "No type";
	std::cout << "Animal constructor called with default type : " << type << std::endl;
}

Animal::Animal(const Animal &original)
{
	std::cout << "Animal copy constructor called to copy from this type : " << original.type << std::endl;
	*this = original;
}

Animal &Animal::operator=(const Animal &obj)
{
	std::cout << "Animal assignation operator called to assign from this type : " << obj.type << std::endl;
	if (this != &obj)
		type = obj.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called with type : " << type << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}

void Animal::makeSound() const
{
	std::cout << "Animal type : " << type << " makes a sound" << std::endl;
}