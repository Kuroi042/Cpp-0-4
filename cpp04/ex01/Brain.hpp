#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
class Brain
{
protected:
    std::string ideas[100];

public: 
    Brain();
    ~Brain();
    Brain(const Brain &original);
    Brain &operator=(const Brain &original);
    std::string GetIdeas(int i);
    void setIdeas(std::string newidea , int size);
};

#endif