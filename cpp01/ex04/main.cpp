#include "Replace.hpp"

int main ( int ac, char **av )
{
    if (ac != 4) {
        std::cerr << "Usage: ./SedV2 <filename> <to_find> <replace>." << std::endl;
        return EXIT_FAILURE;
    } else {
        Replace   rep(av[1]);
        rep.replace(av[2], av[3]);
    }
    return EXIT_SUCCESS;
}