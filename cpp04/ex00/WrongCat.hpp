#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
	    WrongCat(const WrongCat &object);
		WrongCat &operator=(const WrongCat &object);
		~WrongCat();
		void makesound() const;
        std::string getType(){
            return Type;
        }

};

#endif