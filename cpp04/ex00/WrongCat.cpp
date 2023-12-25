#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    Type = "EMPTY";
    std::cout << "Calling constrator for WrongCat TYPE  ==" << Type << std::endl;
}
WrongCat::~WrongCat()
{
    std::cout << "Calling destrator for WrongCat TYPE  ==" << Type << std::endl;
}

WrongCat::WrongCat(const WrongCat &object)
{
    std::cout << "Calling copy constractor for WrongCat TYPE  ==" << object.Type << std::endl;
    Type = object.Type;
}

WrongCat &WrongCat::operator=(const WrongCat &object)
{
    std::cout << "Calling copy assignment op  for WrongCat TYPE  ==" << object.Type << std::endl;

    if (this != &object)
    {
        Type = object.Type;
    }
    return *this;
}

void WrongCat::makesound() const
{
    std::cout << "WrongCat of type " << Type << "make a sound\n";
}

