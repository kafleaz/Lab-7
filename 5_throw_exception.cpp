#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter value of a and b: ";
    cin>>a>>b;

    try
    {
        if(b==0)
        {
            throw b;
        }
        else
        {
            cout<<"Division: "<<(float) a/b;
        }    
    }
    catch(int i)
    {
        cout<<"Divide by zero exception :b="<<i;
    }
    return 0;
}