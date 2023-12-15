#include "ScavTrap.hpp"

int main()
    {
        ScavTrap scav("ScavTrap");
        scav.attack("oplaaa");
        ScavTrap hh(scav);
        
        hh.attack("hhhhhh");
        // scav.attack("kakakaka");
        // scav.guardGate();
    }