#include<iostream>
using namespace std;
int main()
{
    int a[]={5,4,3,2,1};
    int pos,i;
    cout<<"enter the position";
    cin>>pos;
    if(pos<0 || pos>5)
    {
        cout<<"invalid";
    }
    else
    {  
        for(i=pos;i<5;i++)
            {
                a[i]=a[i+1];
            }
         
        cout<<"the array after deletion:-"<<"\n";
        for(i=0;i<4;i++)
        {
            cout<<a[i]<<"\n";
        }
    }    
    return 0;
}