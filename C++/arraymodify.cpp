#include<iostream>
using namespace std;
void modify(int[])
int main()
{
    int a[5]={5,4,3,2,1};
    modify(a[5]);
}

void modify(int x[5])
{
    int i,s=0;
    for(i=0;i<5;i++)
    {
        s=x[i] + i;
    }
    cout<<"the new array is:-";
    for(i=0;i<5;i++)
    {
        cout<<x[i]<<"/n";
    }
}