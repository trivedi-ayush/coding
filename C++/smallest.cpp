#include<iostream>
using namespace std;
int main()
{
    int a[]={10,4,3,20,5};
    int i,min=a[0];
    for(i=0;i<6;i++)
    {
        if(min>a[i] && min<6)
        {
            min=a[i];
        }
    }
    cout<<"minimum is:-"<<min;
    return 0;
}