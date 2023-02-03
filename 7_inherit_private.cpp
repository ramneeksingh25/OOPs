#include<iostream>
using namespace std;
class A{
    int a;
    public:
    int b;
    void GetAB(){
        cout<<"Enter a and b: ";
        cin>>a>>b;
    }
    int GetA(){
        return a;
    }
    void ShowA(){
        cout<<a<<endl;
    }
};
class B: private A{
    public:
    int c;
    void get(){
        GetAB();
    }
    void mul(){
        c=b*GetA();
    }
    void display(){
        cout<<"Number 1=";
        ShowA();
        cout<<"Number 2="<<b<<endl;
        cout<<"Product="<<c<<endl;
    }
};
int main(){
    B b1;
    b1.get();
    b1.mul();
    b1.display();
    return 0;
}