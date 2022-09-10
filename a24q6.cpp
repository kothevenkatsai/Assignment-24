//6. Define a function to swap data of two int variables using call by reference
#include<iostream>
using namespace std;
void swaap(int &p,int &q)
{
    int s=p;
    p=q;
    q=s;
}
int main()
{
    int a,b;
    cin>>a>>b;
    swaap(a,b);
    cout<<a<<" "<<b;
    return 0;
}
