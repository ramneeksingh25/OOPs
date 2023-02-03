#include <iostream>
using namespace std;
class Num
{
    int a, b;

public:
    Num()
    {
        a = 0;
        b = 0;
    }
    Num(int a, int b);
    ~Num()
    {
        cout << "Destructor has been excecuted!\n";
    }
};
Num::Num(int a, int b)
{
    if (a > b)
    {
        cout << a << " is greater! \n";
    }
    else if (b > a)
    {
        cout << b << " is greater! \n";
    }
    else
    {
        cout << "Both numbers are equal!";
    }
}
int main()
{
    int a,b;
    cout<<"Enter two numbers:\n";
    cin>>a>>b;
    Num M(a,b);
    return 0;
}
