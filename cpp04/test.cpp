#include <iostream>
using namespace std;
class human {
    protected :
     std::string Type; 
     public:
   virtual  void Anounce(){
        cout<<"default ana mouwatin "<<Type<<endl;
     }
     human(){
        Type = "meghribi";
        cout<<"human is alive\n";
     }
     ~human(){
        cout<<"human meghribi out\n";
     }
    std::string getType(){
        return Type;
    }
    
};
class chamali :public human{

    protected:
    public:

    chamali(){
        Type  = "chamali";
        cout<<"Chamali is alive\n";
    }
    std::string getType(){
        return Type;
    } 
    ~chamali(){
        cout<<"chamali is out\n";
    }
      void Anounce(){
        cout<<" ana mouwatin chamali "<<Type<<endl;
     }

};

class aroubi :public human{

    protected:
    public:

    aroubi(){
        Type  = "aroubi";
        cout<<"aroubi is alive\n";
    }
    std::string getType(){
        return Type;
    } 
    ~aroubi(){
        cout<<"aroubi is out\n";
    }
      void Anounce(){
        cout<<" ana mouwatin 3roubi w "<<Type<<endl;
     }
    
};

int main(){
    human *meghribi = new human() ;
    human *charaf =  new aroubi();
    chamali *amine =  new chamali();
    cout<<"ha wahed "<<meghribi->getType() <<std::endl;
    cout<<"ha wahed "<<charaf->getType() <<std::endl;
    cout<<"ha wahed "<<amine->getType() <<std::endl;
    charaf->Anounce();
    delete amine;
    delete charaf;
    delete meghribi;
}
