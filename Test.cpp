#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Test
{
private:
   
public:
    string xname;
    Test( string name)
    {
        xname = name;
    }

    ~Test()
    {
    }
};



int main(){
    Test* gitclass = new Test("Earl's file");
    std::cout<<" This is a new file :"<< gitclass->xname;

}