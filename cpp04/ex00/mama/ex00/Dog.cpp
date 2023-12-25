

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog constructor called with default type : "<< type << std::endl;
}

// Dog::Dog(const Dog &original)
// {
// 	std::cout << "Dog copy constructor called to copy from this type : " << original.type << std::endl;
// 	*this = original;
// }

Dog &Dog::operator=(const Dog &obj)
{
	std::cout << "Dog assignation operator called to assign from this type : " << obj.type << std::endl;
	if (this != &obj)
		type = obj.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called with type : " << type << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Dog type : " << type << " makes a sound" << std::endl;
}

std::string Dog::getType() const
{
	return (type);
}