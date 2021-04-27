#include<stdio.h>

struct node
{
int info;
struct node *link;
};

 struct node * START=NULL;

 struct node* createNode()
{
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    return(n);
}

void insertNode()
{
    struct node *temp,*t;
    temp=CreateNode();
    printf("Enter a no.");
    scanf("%d",&temp->info);
    temp->link=NULL;
    if(START==NULL)
        START=temp;
    else
    {
        t=START;
        while(t->link!=NULL)
        {
            t=t->link;
        }
        t->link=NULL;

    }
}

 void deleteNode()
 {
     struct node *r;
     if(START==NULL)
        printf("List is Empty");
        else
        {
            r=START;
            START=START->link;
            free(r);
        }
}

void viewlist()
{
    struct node *t;
     if(START==NULL)
        printf("List is Empty");

        else
        {

            t=START;
            while(t!=NULL)
            {
                printf("%d",t->info);
                t=t->link;
            }
        }
}

 int menu()
 {
     int ch;
     printf("\n1.Add Value to the list");
     printf("\n2.Delete first Value to the list");
     printf("\n3.View list");
     printf("\n4.Exit");
     printf("\n\n.Enter Your choice");
     scanf("%d",&ch);
     return(ch);
 }

void main()
{
    while(1)
    {
        clrscr();
        switch(menu());
        {
            case1:
                insertNode();
                break;

            case2:
                deleteNode();
                break;

            case3:
                viewlist();
                break;

            case4:
                exit(0);


//            default:
           printf("Invalid choice");

        }
        getch();
    }
}
