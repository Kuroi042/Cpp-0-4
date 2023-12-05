#include "Harl.hpp"

void	Harl::debug(void){
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n";
}
void	Harl::info(void){
	std::cout << "cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n";
}
void	Harl::warning(void){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n";
}
void	Harl::error(void){
	std::cout << "This is unacceptable, I want to speak to the manager now.\n";
}

void Harl::complain(std::string level) {
    void(Harl::*pointer_to_function[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"}; // different log level
    int i = 0;
    while (i <= 3) {
        if (levels[i] == level) {
            (this->*pointer_to_function[i])(); 
            return;
        }
        i++;
    }
}