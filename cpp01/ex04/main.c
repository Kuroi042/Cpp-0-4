
#include <iostream>
#include <string>
#include <fstream>

int replace(std::string filename, std::string s1, std::string s2)
{
    std::ifstream in(filename.c_str());  // Use c_str() to convert std::string to const char*
    if (!in.is_open() || in.fail())
    {
        std::cerr << "\033[1;31mError: can't open file: \033[0m" << filename << std::endl;
        return 3;
    }

    std::ofstream out((filename + ".replace").c_str());  // Use c_str() for the output file too
    if (!out.is_open() || out.fail())
    {
        std::cerr << "\033[1;31mError: can't create output file: \033[0m" << filename << ".replace" << std::endl;
        return 4;
    }

    std::string line;
    size_t pos;
    size_t len_s1 = s1.length();

    while (std::getline(in, line))
    {
        while ((pos = line.find(s1)) != std::string::npos)
        {
            out << line.substr(0, pos);
            out << s2;
            line = line.substr(pos + len_s1);
        }
        out << line;
        if (!in.eof())
            out << std::endl;
    }

    out.close();
    in.close();
    return 0;
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "\033[1;31mError: Wrong number of arguments\033[0m" << std::endl;
        std::cerr << "Try: ./replace <filename> <string1> <string2>" << std::endl;
        return 1;
    }

    std::string filename = av[1];
    std::string s1 = av[2];
    if (s1.empty())
    {
        std::cerr << "\033[1;31mError: The string to be replaced is empty\033[0m" << std::endl;
        return 2;
    }

    std::string s2 = av[3];

    int result = replace(filename, s1, s2);

    if (result == 3 || result == 4)
        return result;

    return 0;

}