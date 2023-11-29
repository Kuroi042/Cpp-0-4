#include <iostream>

char to_upper(char c) { // to upper function
    if (c >= 'a' && c <= 'z') {
        c -= 32;
    }
    return c;
}

void megaphone(char *str) { // megaphone function 
    int i = 0;

    while (str[i]) {
        std::cout << to_upper(str[i]);
        i++;
    }
}

int main(int argc, char **argv) { // main fucntion 
    int i = 1;
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
    } 
    else if (argc > 1) {
        while (i < argc) {
            megaphone(argv[i]);
                std::cout << ' ';  
            i++;
        }
        std::cout<<std::endl;
    }
    return 0;
}