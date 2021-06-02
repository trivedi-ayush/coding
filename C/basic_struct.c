#include<conio.h>
#include<stdio.h>
#include<string.h>
struct data
{
    int x;
    char s[20];
};

int main()
{
    struct data d;
    d.x=120;
    strcpy(d.s,"ayush");
    printf("%d\n",d.x);
    puts(d.s);
    return 0;
}
