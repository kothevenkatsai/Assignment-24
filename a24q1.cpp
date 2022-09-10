//1. Define a function to check whether a given number is a Prime number or not.
#include<iostream>
using namespace std;
int is_prime(int no)
{
    int flag=0;
    for(int i=2;i<no;i++)
    {
        if(no%i==0)
            flag++;
    }
    if(flag==0)
        return 1;
    else
        return 0;
}
int main()
{
    int no;
    cin>>no;
    if(is_prime(no))
        cout<<" the no is prime";
    else
        cout<<" the number is not prime";
    return 0;
}
