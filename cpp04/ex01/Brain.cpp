#include "Brain.hpp"

Brain::Brain(){
    std::cout<< "initializing brain constractor\n";

    }

Brain::~Brain(){
    std::cout<< "Calling  brain destractor\n";
}

Brain::Brain(const Brain &original){
    std::cout<<"Brain copy constractor\n";
    int i = 0;
    while(i<100){
        ideas[i] =  original.ideas[i];
        i++;
    }
}


Brain &Brain::operator=(const Brain &original){
    	std::cout << "Calling brain asignation operator  " << std::endl;
        if(this!=&original){
            int i = 0;
            while(i<100){
                this->ideas[i] = original.ideas[i];
                i++;
            }
        }
            return *this;
}
