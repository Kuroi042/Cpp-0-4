#ifndef FIXED_HPP
# define FIXED_HPP

#include<cmath>
#include<iostream>

class Fixed{
	private:
		int					n;
		static const int	fractBit = 8;
	public:
		Fixed(void);
		Fixed(const int n_int);
		Fixed(const float f_float);
		Fixed(const Fixed &fixed);
		~Fixed();
		Fixed&	operator= (const Fixed &fixed);
		int		getRawBits(void) const;
		void	setRawBits(int const r);
		float	toFloat( void ) const;
		int		toInt( void ) const;
		friend	std::ostream & operator<<(std::ostream & o, Fixed const & fixed);
		bool	operator>(const Fixed &fixed) const;
		bool	operator<(const Fixed &fixed) const;
		bool	operator>=(const Fixed &fixed) const;
		bool	operator<=(const Fixed &fixed) const;
		bool	operator==(const Fixed &fixed) const;
		bool	operator!=(const Fixed &fixed) const;
		Fixed	operator+(const Fixed &fixed) const;
		Fixed	operator-(const Fixed &fixed) const;
		Fixed	operator*(const Fixed &fixed) const;
		Fixed	operator/(const Fixed &fixed) const;
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);
		static Fixed&	min(Fixed &a, Fixed &b);
		static Fixed&	max(Fixed &a, Fixed &b);
		static const Fixed&	min(const Fixed &a, const Fixed &b);
		static const Fixed&	max(const Fixed &a, const Fixed &b);
};

#endif