#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <stdlib.h>

class Fixed
{
    private:

        int value ;
        static const int numBits = 8; 
    
    public:
        Fixed();
        ~Fixed();
        Fixed( const Fixed& original);//copy constractorpr
         Fixed& operator=(const Fixed& original);//copy assignement
         void setRawBits( int const raw );
          int getRawBits( void ) const;

};
#endif