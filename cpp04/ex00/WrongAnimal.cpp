#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    Type = "EMPTY";
    std::cout << "Calling constrator for WrongAnimal TYPE  ==" << Type << std::endl;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "Calling destrator for WrongAnimal TYPE  ==" << Type << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &original)
{
    std::cout << "Calling copy constractor for WrongAnimal TYPE  ==" << original.Type << std::endl;
    Type = original.Type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &original)
{
    std::cout << "Calling copy assignment op  for WrongAnimal TYPE  ==" << original.Type << std::endl;

    if (this != &original)
    {
        Type = original.Type;
    }
    return *this;
}

void WrongAnimal::makesound() const
{
    std::cout << "Wronganimal of type " << Type << "make a sound\n";
}

std::string WrongAnimal::getType() const
{
    return Type;
}