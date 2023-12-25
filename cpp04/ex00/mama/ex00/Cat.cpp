

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat constructor called with default type : "<< type  << std::endl;
}

// Cat::Cat(const Cat &original)
// {
// 	std::cout << "Cat copy constructor called to copy from this type : " << original.type << std::endl;
// 	*this = original;
// }

Cat &Cat::operator=(const Cat &obj)
{
	std::cout << "Cat assignation operator called to assign from this type : " << obj.type << std::endl;
	if (this != &obj)
		type = obj.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called with type : " << type << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cat type : " << type << " makes a sound" << std::endl;
}

std::string Cat::getType() const
{
	return (type);
}