#include <iostream>
using namespace std;
class op
{
    int a;

public:
    void getNum()
    {
        cout << "Enter number: ";
        cin >> a;
    }
    int putNum()
    {
        return a;
    }
    int operator--()
    {
        return --a;
    }
    int operator!()
    {
        return !a;
    }
    friend int operator+(op, op);
    void display()
    {
        cout << a << endl;
    }
};
int operator+(op a, op b)
{
    int A = a.putNum();
    int B = b.putNum();
    return A + B;
}
int main()
{
    op num1;
    op num2;
    num1.getNum();
    cout << "After applying decrement operator, number is " << --num1 << endl;
    cout << "After applying NOT operator, number becomes " << !num1 << endl;
    num2.getNum();
    int sum = num1 + num2;
    cout << "Number 1 is ";
    num1.display();
    cout << "Number 2 is ";
    num2.display();
    cout << "After applying binary(+) operator, sum is " << sum << endl;
}