#include<iostream>
using namespace std;
template <class k>
k minimum(k x, k y)
{
    k min;
    if(x<y)
    {
        min=x;
    }
    else
    {
        min=y;
    }
    return min;
}
int main()
{
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Minimum number is: "<<minimum(a ,b);
}