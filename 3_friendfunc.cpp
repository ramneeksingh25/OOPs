#include <iostream>
using namespace std;
class num2;
class num1
{
private:
    int m;

public:
    void get1()
    {
        cout << "Enter the value of first integer: \n";
        cin >> m;
    }
    friend void max(num1, num2);
};
class num2
{
private:
    int n;

public:
    void get2()
    {
        cout << "Enter the value of second integer: \n";
        cin >> n;
    }
    friend void max(num1, num2);
};
void max(num1 a, num2 b)
{
    if (a.m > b.n)
    {
        cout << "Greater number is: \n"
             << a.m << endl;
    }
    else
    {
        cout << "Greater number is: \n"
             << b.n << endl;
    }
}
int main()
{
    num1 a;
    num2 b;
    a.get1();
    b.get2();
    max(a, b);
    return 0;
}