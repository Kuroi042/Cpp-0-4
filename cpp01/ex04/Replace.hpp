#ifndef REPLACE_HPP
#define REPLACE_HPP
#include <iostream>
#include <string>
#include <iostream>
#include <fstream>

class Replace
{
private:
    std::string inFile;
    std::string outFile;

public:
    Replace( std::string filename);
    ~Replace();
    void   replace( std::string s1, std::string s2);
};

#endif 