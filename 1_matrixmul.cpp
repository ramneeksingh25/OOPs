#include <iostream>
using namespace std;
void matrix(int a, int b, int a1[100][100], int a2[100][100])
{
    if (a == b)
    {
        int m[100][100];
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                m[i][j]=0;
                for (int k = 0; k < b; k++)
                {
                    m[i][j] += a1[i][k]*a2[k][j];
                }
            }
        }
        cout << "Product matrix: "<<endl;
        for (int i = 0; i < a; ++i)
        {
            for (int j = 0; j < b; ++j)
            {
                cout<<m[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Condition for multiplication not matched... Try Again!"<<endl;
    }
}
int main(){
    int r,c,a[100][100],b[100][100];
    cout<<"Enter the number of rows: ";
    cin>>r;
    cout<<"Enter the number of columns: ";
    cin>>c;
    cout<<"Enter the elements for 1st matrix: "<<endl;
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            cout<<"Enter element on position "<<i+1<<j+1<<": ";
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter the elements for 2nd matrix: "<<endl;
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            cout<<"Enter element on position "<<i+1<<j+1<<": ";
            cin>>b[i][j];
        }
    }
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    matrix(r,c,a,b);
    return 0;    
}