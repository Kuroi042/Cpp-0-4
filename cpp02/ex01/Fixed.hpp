#ifndef FIXED_HPP
# define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed {
private:
    int Value;
    static const int bits = 8;

public:
    Fixed(void);
    Fixed(const int value_int);
    Fixed(const float f_float);
    Fixed(const Fixed &fixed);
    ~Fixed();
    Fixed &operator=(const Fixed &fixed);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;

    // Member function for overloading <<
    std::ostream &output(std::ostream &out) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed);

#endif
