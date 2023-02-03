#include <iostream>

using namespace std;

class student{
 public:
 string name;
 int ENRL;
 int age;
 string batch;

 public:
 enter(){
     cout<<"Enter name: ";
     cin>>name;
     cout<<"Enter Enrollment no. :";
     cin>>ENRL;
     cout<<"Enter Age:";
     cin>>age;
     cout<<"Enter Batch: ";
     cin>>batch;

 }
 display(){
     cout<<"The name of the student is: "<<name<<endl;
     cout<<"Enrollment no. :"<<ENRL<<endl;
     cout<<"Age:"<<age<<endl;
     cout<<"Batch: "<<batch<<endl;
}
};
int main()
{
    student s1;
    s1.enter();
    s1.display();
    return 0;
}