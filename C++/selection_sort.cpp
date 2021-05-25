#include<iostream>
using namespace std;
int min(int [],int,int);
int main()
{
    int a[]={2,4,6,8,9,5,11,22,33,0};
    int LOC,k,temp,i;
    for(k=0;k<=8;k++)
    {
        LOC=min(a,k,10);
        temp=a[k];
        a[k]=a[LOC];
        a[LOC]=temp;
    }
    cout<<"the sorted array is"<<endl;
    for(i=0;i<=8;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
    int min(int a[],int k,int n)
    {
        int j,LOC,MIN;
        MIN=a[k];
        LOC=k;
        for(j=k+1;j<=n-1;j++)
        {
            if(MIN>a[j])
            {
                MIN=a[j];
                LOC=j;
            }
        }
        return(LOC);
    }
    
