//9. Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.
#include<iostream>
using namespace std;
int maxi(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
float maxi(float c,float d)
{
    if(c>d)
        return c;
    else
        return d;
}
int main()
{
    int a,b;
    float c,d;
    cin>>a>>b;
    cin>>c>>d;
    cout<<"max number is "<<maxi(a,b);
    cout<<"\nmax number is "<<maxi(c,d);
    return 0;
}
