#include <iostream>


int main(int argc, char **argv) {
    int i = 1;
    int j = 0;
    if (argc <2) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
    } 
    else {
        while (i < argc) {
            j= 0;
               while(argv[i][j])
             std::cout<<(char)std::toupper(argv[i][j++]);
                    std::cout << ' ';  
            i++;
        }
        std::cout<<std::endl;
    }
    return 0;
}
