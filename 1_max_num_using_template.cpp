#include<iostream>
using namespace std;
template < class m >
m maxmium(m a, m b)
{
    m max;
    if(a>b)
    {
        max=a;
    }
    else
    {
        max=b;
    }
    return max;
}
int main()
{
    int x, y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    cout<<"Maximum number is: "<<maxmium(x ,y);
}