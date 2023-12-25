

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "Wrong cat";
	std::cout << "WrongCat constructor called with default type : "<< type << std::endl;
}

// WrongCat::WrongCat(const WrongCat &original)
// {
// 	std::cout << "WrongCat copy constructor called to copy from this type : " << original.type << std::endl;
// 	*this = original;
// }

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	std::cout << "WrongCat assignation operator called to assign from this type : " << obj.type << std::endl;
	if (this != &obj)
		type = obj.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called with type : " << type << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat type : " << type << " makes a sound" << std::endl;
}

