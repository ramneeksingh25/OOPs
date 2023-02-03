#include <iostream> 
#include <string> 
#include <fstream>
using namespace std;
void read(string fname)
{
    char line[100];
    ifstream fin;
    fin.open(fname);
    while (fin)
    {
        fin.getline(line, 100);
        cout << line;
    }
    fin.close();
    cout << "File read!";
}
void write(string fname, string name, int age, string gender, int height, int weight)
{
    ofstream fout;
    fout.open(fname);
    fout << "Name: " << name;
    fout << " Age:" << age;
    fout << " Gender: " << gender;
    fout << " Height: " << height;
    fout << " Weight: " << weight;
    fout.close();
    cout << "File written !\n ";
}
int main()
{
    string name, gender;
    string fname="student.txt";
    cout << "Enter the name of the student: ";
    cin >>name;
    cout<<"Enter the gender";
    cin>>   gender;
    int age, height, weight;
    cout << "Enter age:" ;
    cin >> age;
    cout << "Enter hieght: " ;
    cin >> height;
    cout << "Enter weight:" ;
    cin >> weight;
    write(fname, name, age, gender, height, weight);
    read(fname);
    return 0;
}