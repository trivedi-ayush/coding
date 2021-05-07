#include <stdio.h>

void main()
{
int nums[4]={1,2,3,4};
int x[4];
int i,sum=0;
for(i=0;i<4;i++)
scanf("%d",&nums[i]);
for(i=0;i<4;i++)
{
    sum=sum +nums[i];
    x[i]=sum;
}
}
