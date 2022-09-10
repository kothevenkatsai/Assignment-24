//10. Write functions using function overloading to add two numbers having different data types.
#include<iostream>
using namespace std;
int add(int a,int b)
{
    return (a+b);

}
float add(float a,float b)
{
    return (a+b);
}
int main()
{
    int a,b;
    float c,d;
    cin>>a>>b;
    cin>>c>>d;
    cout<<"sum is "<<add(a,b);
    cout<<"\nsum is "<<add(c,d);
    return 0;
}
