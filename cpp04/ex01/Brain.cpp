#include "Brain.hpp"

Brain::Brain(){
    std::cout<< "initializing brain constractor\n";
    int i = 0;
    while(i<100)
        {
            this->ideas[i] = "deafult idea";
    i++;
               }
} 

Brain::~Brain(){
    std::cout<< "Calling  brain destractor\n";
}

Brain::Brain(const Brain &original){
    std::cout<<"Brain copy constractor\n";
    *this  =  original;
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

void Brain::setIdeas(std::string newidea , int index){
    this->ideas[index] = newidea;
}
std::string Brain::GetIdeas(int i){
    return this->ideas[i];
}

