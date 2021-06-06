#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
    int x;
    struct node *link;
};
struct node *START=NULL;

struct node * createnew()
{
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    return(n);
}

void insert()
{
    struct node *temp,*t;
    temp=createnew();
    printf("\nEnter element:-");
    scanf("%d",&temp->x);
    temp->link=NULL;
    if(START==NULL)
    {
        START=temp;
    }
    else
    {
        t=START;
        while(t->link!=NULL)
        {
            t=t->link;
        }
        t->link=temp;   
    }
}

void viewlist()
{
    struct node *t;
    if(START==NULL)
    {
        printf("list is empty");
    }
    else
    {
        t=START;
        while(t!=NULL)
        {
            printf("%d\t",t->x);
            t=t->link;
        }
    }
}

void delete()
{
    struct node *r;
    if(START==NULL)
    {
        printf("list is empty");
    }
    else
    {
        r=START;
        START=START->link;
        free(r);
    }
    
}
int menu()
{
    int ch;
    printf("\n1 for insert");
    printf("\n2 for view");
    printf("\n3 for delete");
    printf("\n4 for exit");
    scanf("%d",&ch);
    return(ch);
}

int main()
{
    while(1)
    {
        switch (menu())
        {
        case 1:
                insert();
                break;
        case 2:
                viewlist();
                break;
        case 3:
                delete();
                break;
        case 4:
                exit(0);
                break;      
        default:
                printf("invalid");
                break;
        }
        getch();
    }
}


