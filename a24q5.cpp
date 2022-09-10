//5. Define a function to check whether a given number is a term in a Fibonacci series or not.
#include<iostream>
using namespace std;
int check(int no)
{
    int a=0,b=1,c;
    for(int i=0;i<=no;++i)
    {
        if(no==b)
            return 1;
        c=a+b;
        a=b;
        b=c;

    }
    return 0;
}
int main()
{
    int no;
    cin>>no;
    if(check(no))
        cout<<"number is present in fibonacci series";
    else
      cout<<"number is not present in fibonacci series";
    return 0;
}
