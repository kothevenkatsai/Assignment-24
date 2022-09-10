//8. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle
#include<iostream>
using namespace std;
float area(int r)
{
    return (3.14*r*r);
}
int area(int l,int br)
{
    return (l*br);
}
float area(float m,int b,int h)
{
    return (h*b*h);
}
int main()
{
    int r,l,br,b,h;
    cout<<"enter radius";
    cin>>r;
    cout<<"enter length and breadth";
    cin>>l>>br;
    cout<<"enter base and height";
    cin>>b>>h;
    cout<<"\narea of circle :"<<area(r);
    cout<<"\narea of rectangle :"<<area(l,br);
    cout<<"\narea of triangle :"<<area(0.5,b,h);
}
