#include<iostream>
using namespace std;
#include<exception>
class myexception:public exception{
    public:
    const char* what() const throw(){
        return "Attempted to divide by zero!\n";
    }
};
int main(){
    try{
        float x,y;
        cout<<"Enter 2 numbers:\n";
        cin>>x>>y;
        if (y==0)
        {
            myexception Z;
            throw Z;
        }
        else
        {
            cout<<"x/y="<<x/y<<endl;
        }
    }
    catch(myexception e){
            cout<<e.what();
    }
}