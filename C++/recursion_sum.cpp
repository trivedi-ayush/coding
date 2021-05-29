#include<iostream>
using namespace std;
int sum(int);
int main()
{
    int k,n;
    cout<<"enter no:-";
    cin>>n;
    k=sum(n);
    cout<<"sum is:-"<<k;
    return 0;
}

int sum(int n)
{
    int s;
    if(n==1)
    {
        return(1);
    }
    else
    {
        s=n+sum(n-1);
        return(s);
    }
}