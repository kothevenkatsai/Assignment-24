//7. Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
int add(int a,int b,int c=0)
{
    return (a+b+c);
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    //cin>>a>>b;
    cout<<add(a,b,c);
}
