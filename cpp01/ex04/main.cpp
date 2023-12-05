#include "Replace.hpp"

int main ( int argc, char **argv )
{
    if(argc == 4)
        {
            Replace rplc(argv[1]);
            rplc.replace(argv[2], argv[3]);
        }
    else 
        std::cout<<"enter ./replace |Filename|  |tofind| |to repace|";
    return EXIT_SUCCESS;
}