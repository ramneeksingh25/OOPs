#include<iostream>
using namespace std;
void swap(int a,int b){
    int x=a;
    a=b;
    b=x;
}
void swap(int *a,int *b){
    int x=*a;
    *a=*b;
    *b=x;
}
int main(){
    int a,b;

    cout<<"Enter first number (a): ";
    cin>>a;
    cout<<"Enter second number (b): ";
    cin>>b;
    swap(a,b);
    cout<<"Numbers are swapping using call by value are: a="<<a<<" and b="<<b<<endl;
    swap(&a,&b);
    cout<<"Numbers are swapping using call by reference are: a="<<a<<" and b="<<b<<endl;

    return 0;
}