#include<iostream>
using namespace std;

void num(int x)
{
    if(x==1)
    {
        throw "az";
    }
    else if (x==0)
    {
        throw x;
    }
    else if (x==-1)
    {
        throw 4.88;
    }
    else
    {
        cout<<"The input is invalid."<<endl;
    }
}

int main()
{
    int a;
    cout<<"Enter -1, 0 or 1,"<<endl;
    cin>>a;
    try
    {
        num(a);
    }
    catch(char const* e)
    {
        cout<<"The character is "<<e<<endl;
    }
    catch(int e)
    {
        cout<<"The integer is "<<e<<endl;
    }
    catch(double e)
    {
        cout<<"The double is "<<e<<endl;
    }
}