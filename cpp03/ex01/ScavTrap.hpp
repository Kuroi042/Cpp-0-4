#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <stdio.h>

class ScavTrap : public ClapTrap
{
    private:

    public:
        ScavTrap();
        ScavTrap(const std::string  NameSv );
        ~ScavTrap();
        ScavTrap( ScavTrap &original);

        void attack(const std::string& target);
        ScavTrap& operator=(ScavTrap &original);
        void guardGate();

};
#endif