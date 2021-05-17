#include<iostream>
#include<conio.h>
int main()
{
    int a[20]={1,3,5,7,9};
    int b[]={2,4,6,8};
    int i,m=5,n=4;
    for(i=0;i<n;i++)
    {
        a[m+i]=b[i];
    }
    for(i=0;i<m+n;i++)
    {
        std::cout<<a[i]<<"\n";
    }
    return 0;
}