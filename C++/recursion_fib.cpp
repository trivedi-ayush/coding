#include<iostream>
using namespace std;
int fib(int);
int main()
{
    int i,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<fib(i)<<" ";
    }
    return 0;
}

int fib(int i)
{
    if(i==1 || i==2)
    return(1);
    else
    return(fib(i-1) + fib(i-2));
}
