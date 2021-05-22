#include<iostream>
using namespace std;
int main()
{
    int a[20];
    int i,n,ele;
    cout<<"enter size:-";
    cin>>n;
    cout<<"enter array:-"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter element to be searched:-";
    cin>>ele;
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            cout<<"element found at index:- "<<i;
            break;
        }
    }
    return 0;
}