#include <iostream>
using namespace std;
int main()
{
    std::string str = "HI THIS IS BRAIN";

    std::string *stringPTR = &str;
    std::string& stringREF =  str;

    cout<< "adress of string |str|     is |"<<&str<< "|\n";
    cout<< "adress held by |stringPTR| is |" <<stringPTR<< "|\n";
    cout<< "adress held by |stringREF| is |" <<&stringREF<< "|\n";

    cout<< "value held by |str|        is |"  << str<< "|\n";
    cout<< "value held by |stringPTR|  is |"  << *stringPTR<< "|\n";
    cout<< "value held by |stringREF|  is |"  << stringREF<< "|\n";
}