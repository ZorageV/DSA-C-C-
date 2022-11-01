#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void create();
void display();
void inatbeg();
void inatend();
void inatmid();
void deatbeg();
void deatend();
void deatmid();
int main()
{
    int m=1;
    while(m==1)
    {
    int s;
    printf("1:create\n");
    printf("2:display\n");
    printf("3:insert at beg\n");
    printf("4:insert at end\n");
    printf("5:insert at mid\n");
    printf("6:delete at beg\n");
    printf("7:delete at end\n");
    printf("8:delete at mid\n");
    printf("9:exit\n");
    printf("enter ur choice:");
    scanf("%d",&s);
    switch (s)
    {
    case 1:
    create();
    break;
    case 2:
    display();
    break;
    case 3:
    inatbeg();
    break;
    case 4:
    inatend();
    break;
    case 5:
    inatmid();
    break;
    case 6:
    deatbeg();
    break;
    case 7:
    deatend();
    break;
    case 8:
    deatmid();
    break;
    case 9:
    exit(0);
    break;
    }
    }
    return 0;
}
void display()
{
    struct node *temp=NULL;
    if (head==NULL)
    {
        printf("list empty\n");
    }
    else
    {
        temp=head;
        do
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        } while (temp!=head);
    }
    printf("\n");
}
void create()
{
    struct node *newnode,*next;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("data:");
    scanf("%d",&newnode->data);
    if (head==NULL)
    {
        head=newnode;
    }
    else
    {
        next=head;
        do
        {
            next=next->next;
        } while (next->next!=head);
        next->next=newnode;
    }
    newnode->next=head;
}
void inatbeg()
{
    struct node *newnode,*next;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    if (head==NULL)
    {
        printf("list empty\n");
    }
    else
    {
    printf("data:");
    scanf("%d",&newnode->data);
    newnode->next=head;
    next=head;
    do
    {
        next=next->next;
    } while (next->next!=head);
    next->next=newnode;
    head=newnode;
    }
}
void inatend()
{
    struct node *newnode,*next;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->next=NULL;
    if (head==NULL)
    {
        printf("list empty");
    }
    else
    {
        next=head;
        do
        {
            
        } while (next->next!=head);
        
    }
}
void inatmid()
{}
void deatbeg()
{}
void deatend()
{}
void deatmid()
{}