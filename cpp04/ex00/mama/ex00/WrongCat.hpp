

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		// WrongCat(const WrongCat &original);
		WrongCat &operator=(const WrongCat &obj);
		~WrongCat();
		void makeSound() const;
};

#endif