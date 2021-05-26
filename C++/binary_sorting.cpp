#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5};
    int low=0,high=4;
    int i,n,mid;
    cout<<"enter element:-";
    cin>>n;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(n<a[mid])
        high=mid-1;
        else if(n>a[mid])
        low=mid+1;
        else if(n==a[mid])
        {
            cout<<"the element found at index:-"<<mid;
            break;
        }
    }
    return 0; 
}
