#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"


class FragTrap : public ClapTrap
{
    private:

    public:
        FragTrap();
        FragTrap(const std::string  NameSv );
        ~FragTrap();
        void attack(const std::string& target);
        FragTrap(const FragTrap &original);
        FragTrap& operator=(const FragTrap &original);
        void highFivesGuys(void);

};








#endif