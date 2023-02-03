#include <iostream>

using namespace std;

class student
{
public:
    string name;
    int ENRL;
    int age;
    string batch;

public:
    void enter()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter Enrolment no. :";
        cin >> ENRL;
        cout << "Enter Age:";
        cin >> age;
        cout << "Enter Batch: ";
        cin >> batch;
    }
    void display()
    {
        cout << "The name of the student is: " << name << endl;
        cout << "Enrolment no. :" << ENRL << endl;
        cout << "Age:" << age << endl;
        cout << "Batch: " << batch << endl;
    }
};
int main()
{
    student s1;
    s1.enter();
    s1.display();
    return 0;
}