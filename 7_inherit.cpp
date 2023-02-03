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
        cout<<"a=";
        ShowA();
        cout<<"b="<<b<<endl;
        cout<<"c="<<c<<endl;
    }
};
int main(){
    A a1;
    B b1;
    a1.GetAB();
    b1.get();
    b1.mul();
    b1.display();
    return 0;
}