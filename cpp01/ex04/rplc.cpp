#include <iostream>
#include <string>
#include <iostream>
#include <fstream>
#include <stdio.h>

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

Replace::Replace(std::string filename ):inFile(filename)
    {
        this->outFile =  this->inFile + ".replace";
    }
Replace::~Replace()
    {
    }
void Replace::replace(std::string Word , std::string replace)
    {
        std::ifstream  infl(this->inFile);
        if(infl.is_open())
            {
                std::string content;
                if(std::getline(infl , content , '\0'))
                    {
                        std::ofstream ofl(this->outFile);
                        size_t position;
                        position = content.find(Word);
                        while(position!=std::string::npos)// max size_t
                        {
                                content.erase(position, Word.length());
                                content.insert(position , replace);
                                position =  content.find(Word); //continue
                        }
                        ofl<<content; //write into outfile
                        ofl.close();
                    }
                else{
                    std::cout<<"file is empty\n";
                }
            }
        else    
     
            {
               std::cerr<<"cant open file\n";
                exit(1);
            }
    }
    
    int main(int argc , char **argv)
        {
        if(argc == 4)
        {
            Replace rplc(argv[1]);
            rplc.replace(argv[2],argv[3]);
        }
        else 
            printf("./a.out xx FileName xx Tofind xx replace\n");
            }