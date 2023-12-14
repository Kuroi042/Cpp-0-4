#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
    private:

    public:
        ScavTrap( const std::string  NameSv, const std::string  NameTr );
        ~ScavTrap();
        void guardGate();

};








#endif