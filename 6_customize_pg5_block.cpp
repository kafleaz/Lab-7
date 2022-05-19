#include<iostream>
using namespace std;
void divide(int a, int b)
{
    if (b==0)
    {
        throw b;
    }
    else
    {
        cout<<"Result is "<<(float) a/b;
    }
}
int main ()
{
    int a, b;
    cout<<"Enter any two number ";
    cin>>a>>b;

    try
    {
        divide (a,b);
    }
    catch(int e)
    {
        cout<<"Divide by zero exception :b="<<e;
    }
}