// Pascal triangle
#include<iostream>
using namespace std;
int fact(int n)
{
    if(n<=0)
        return 1;
    int fact=1;
    for(int i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    return fact;
}
int comb(int n,int r)
{
    int comb=1;
    comb=fact(n)/(fact(r)*fact(n-r));
    return comb;
}
int main()
{
    int i,j,n;
    cin>>n;
    for(i=0;i<=n;++i)
    {
        for(j=0;j<=i;j++)
        {
            cout<<comb(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
