#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"


class FragTrap : public ClapTrap
{
    private:

    public:
        FragTrap();
        FragTrap(std::string  NameSv );
        ~FragTrap();
        void attack(const std::string& target);
        FragTrap( FragTrap &original);
        FragTrap& operator=( FragTrap &original);
        void highFivesGuys(void);

};








#endif