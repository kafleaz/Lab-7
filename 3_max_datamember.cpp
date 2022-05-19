#include<iostream>
using namespace std;
template <class x>
class maximum
{
    x m,n;
    public:
    void setdata()
    {
        cout<<"Enter any two number:";
        cin>>m>>n;
    }
    x getdata()
    {
       x max;
       max= m>n ? m:n ;
       return max;
    }
};
int main()
{
    maximum <int> m1;
    m1.setdata();
    cout<<"Maximum number is: "<<m1.getdata()<<endl;
    return 0;
}