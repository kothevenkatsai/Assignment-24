//2. Define a function to find the highest value digit in a given number.
#include<iostream>
using namespace std;
int main()
{
    int no;
    cin>>no;
    int maxi=no%10;
    while(no>0)
    {
        int a=no%10;
        if(a>maxi)
            maxi=a;
        no=no/10;
    }
    cout<<"Highest valued digit of number is "<<maxi;
    return 0;
}
