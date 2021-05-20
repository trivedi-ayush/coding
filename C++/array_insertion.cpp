#include<iostream>
using namespace std;
int main()
{
    int a[]={5,4,2,1,0};
    int n,i,pos;
    cout<<"enter the index:-";
    cin>>pos;
    cout<<"enter the element";
    cin>>n;
    for(i=4;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=n;
    cout<<"the array after insertion is:-"<<"\n";
    for(i=0;i<=5;i++)
    {
        cout<<a[i]<<"\n";
    }
    return 0;
}