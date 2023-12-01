#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
{
Weapon club("crude spiked club"); // initilase the waeapon constractor 
HumanA bob("Bob", club); // initiate the constractor of HumanA  
bob.attack();
club.setType("some other type of club");
bob.attack();
}
{
Weapon club ("crude spiked club");
HumanB jim("Jim");
jim.setWeapon(club);
jim.attack();
club.setType("");
jim.attack();
}

}