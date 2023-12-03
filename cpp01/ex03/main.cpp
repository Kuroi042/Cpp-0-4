#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
{
Weapon club("crude spiked club");// create rge weapon object first
HumanA bob("Bob", club);  //bob uis created and pass reference club so bob can use the club obejct to attack
club.setType("some other type of club");
bob.attack();
}
{
Weapon club ("crude spiked club"); //creat the waepon cnstractor;
HumanB jim("Jim"); // jim does not share the Humanweaopo in the constrator 
jim.setWeapon(club);// use setweapon to  take reference of weapon object Human B will use N ewweapon in attack
jim.attack();
club.setType("");
jim.attack();
}

}