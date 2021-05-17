#include<iostream.h>
#include<stdio.h>
void main()
{
    int f_n=0,s_n=1;
    int sum=0,i,n;
    cout<<"enter no.";
    cin>>n;
    cout<<f_n;
    cout<<s_n;
    for(i=0;i<n;i++)
    {
        sum=f_n + s_n;
        f_n=s_n;
        s_n=sum;
        cout<<sum;
    }
    getch();
}