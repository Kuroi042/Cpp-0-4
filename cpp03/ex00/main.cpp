#include "ClapTrap.hpp"

int main()
    {
        ClapTrap  clap("Jesus"); 

        clap.attack("tarzan");
        clap.beRepaired(1);
        clap.beRepaired(1);
        clap.takeDamage(9);
        //clap.beRepaired(100000);
        clap.takeDamage(9);
        clap.takeDamage(900000);
        //clap.beRepaired(10000000);


    }