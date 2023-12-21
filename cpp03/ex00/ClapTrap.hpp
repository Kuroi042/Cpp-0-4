#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>
#include <limits.h>

class ClapTrap
{
    private:
        std::string Name;
        int Hit_points;
        int Energy_point;
        int Attack_Damage;
        int Max_hp;
    public:
        ClapTrap();
        ClapTrap( std::string name);
        ~ClapTrap();
        ClapTrap( ClapTrap &original);
        ClapTrap& operator=(const ClapTrap &original);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};






#endif