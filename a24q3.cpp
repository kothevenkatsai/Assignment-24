//3. Define a function to calculate x raised to the power y.
#include<iostream>
using namespace std;
int main()
{
    int x,y,ans=1;
    cout<<"enter x";
    cin>>x;
    cout<<"\nenter y";
    cin>>y;
    while(y>0)
    {
        ans=ans*x;
        y--;
    }
    cout<<ans;
}
