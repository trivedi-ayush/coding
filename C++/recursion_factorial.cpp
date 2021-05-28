#include<iostream>
using namespace std;
int fact(int);
int main()
{
    int n,f;
    cout<<"enter no:-";
    cin>>n;
    f=fact(n);
    cout<<"factorial of the n is:-"<<f;
    return 0;
}

int fact(int n)
{
    int f;
    if(n==1 || n==0)
    {
        return(1);
    }
    else
    {
        f=n*fact(n-1);
    }
    return(f);
}