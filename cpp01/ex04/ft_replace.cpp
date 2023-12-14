#include "Replace.hpp"

Replace::Replace(std::string filename) : inFile(filename){
    this->outFile = this->inFile + ".replace";
}

Replace::~Replace(){
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
                    //         if(position != 0)
                    //             {
                    //             printf("the word  isnt located in the inputfile \n");
                    //             exit(0);
                    // }
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