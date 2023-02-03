#include<iostream>
using namespace std;
class number1{
    int n1;
    public:
    void InputN1(){
        cout<<"Enter Number 1:";
        cin>>n1;
    }
    int GetN1(){
        return n1;        
    }
};
class number2{
    int n2;
    public:
    void InputN2(){
        cout<<"Enter Number 2:";
        cin>>n2;
    }
    int GetN2(){
        return n2;        
    }
};
class product : public number1, public number2{
    public:
    int prod;
    void multiply(){
        prod=GetN1()*GetN2();
    }
    void display(){
        cout<<"Number1 = "<<GetN1()<<endl;
        cout<<"Number2 = "<<GetN2()<<endl;
        cout<<"Product = "<<prod<<endl;
    }
};
int main(){
    product p;
    p.InputN1();
    p.InputN2();
    p.display();
    p.multiply();
    p.display();
}