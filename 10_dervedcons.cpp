#include <iostream>

using namespace std;

class Parent{
    public:
    Parent(){
        cout<<"Inside base class"<<endl;
    }
};

class Child:public Parent{
    public:
    Child(){
        cout<<"Inside sub class"<<endl;
    }
};

int main()
{
    Child obj;  
    return 0;
}