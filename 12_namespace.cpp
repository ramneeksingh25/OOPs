#include <iostream>
using namespace std;
namespace firstnamespace
{ void func(){
	cout << "Inside first_space" << endl;
}}
namespace secondnamespace{
void func(){
	cout << "Inside second_space" << endl;
}}
using namespace firstnamespace;
int main ()
{
func();
return 0;
}
