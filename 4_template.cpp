#include <iostream>
using namespace std;
template <class T>

T square(T num)
{
    return num * num;
}
int main()
{
    int in;
    float fl;
    cout << "Enter an integer: ";
    cin >> in;
    cout << "Square of the integer is: " << square<int>(in) << endl;
    cout << "Enter a floating point number: ";
    cin >> fl;
    cout << "Square of the floating point number is: " << square<float>(fl) << endl;
    return 0;
}