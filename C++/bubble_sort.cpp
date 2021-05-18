#include<iostream>
using namespace std;
int main()
{
    int a[]={5,4,3,2,1};
    int temp,round,i;
    for(round=1;round<5;round++)
    {
        for(i=0;i<5-round;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    cout<<"the array after sorting is:-"<<"\n";
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<"\n";
    }
    return 0;
}