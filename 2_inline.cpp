#include <iostream>
using namespace std;
inline int mul(int a, int b)
{
    return a * b;
}
inline float divide(int a, int b)
{
    return a / b;
}
int main()
{
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "a*b=" << mul(a, b) << endl;
    cout << "a/b=" << divide(a,b) << endl;
    return 0;
}