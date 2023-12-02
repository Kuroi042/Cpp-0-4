

#include "HumanA.hpp"

HumanA::HumanA(std::string HumanName, Weapon& humanWeapon) : weapon(humanWeapon)
{
    std::cout << "HumanA is Spawned\n";
    name = HumanName;
}
void HumanA::attack()
    {
        std::cout << name << " is using : " << weapon.getType() <<" to attack\n";
    }

        const std::string& HumanA::getName()
        {
            return name;

        }
