#include<iostream>
using namespace std;
template <class c>
c minimum(c a[], int n)
{
    c min= a[0];
    for (int i = 0; i < n; i++)
    {
        if (min>a[i])
        {
            min= a[i];
        } 
    }
    return min;
}
int main()
{
    int n , x[50];
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    cout<<"Enter element: ";
    for (int i = 0; i < n; i++)
    {
        cin>> x[i];
    }
    cout<<"The minimum number is: "<< minimum(x,n);
    return 0;
}