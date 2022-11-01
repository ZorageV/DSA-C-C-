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
        while (temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    }
    printf("\n");
}
void create()
{
    struct node *newnode,*temp=NULL;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("data in node:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if (head==NULL)
    {
        head=newnode;
    }
    else
    {
    temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    } 
}
void inatbeg()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->next=NULL;
    printf("data in node:");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}
void inatend()
{
    struct node *newnode,*temp=NULL;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    if (head==NULL)
    {
        inatbeg();
    }
    else
    {
        printf("data in node:");
        scanf("%d",&newnode->data);
        temp=head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void inatmid()
{
    struct node *newnode,*temp=NULL;
    newnode=(struct node *)malloc(sizeof(struct node));
    if (head==NULL)
    {
        inatbeg();
    }
    else
    {
        temp=head;
        int c=0;
        while (temp!=NULL)
        {
            temp=temp->next;
            c++;
        }
        temp=head;
        printf("total node are:%d\n",c);
        printf("pos at which you wanna insert:");
        int n;
        scanf("%d\n",&n);
        if (n==1)
        {
            inatbeg();
        }
        else
        {
        printf("data in node:");
        scanf("%d",&newnode->data);
        for (int i = 2 ; i <n ; i++)
        {
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        }
    }
    
}
void deatbeg()
{
    struct node *temp=NULL;
    if (head==NULL)
    {
        printf("list empty");
    }
    else
    {
    temp=head;
    head=head->next;
    free(temp);
    }
}
void deatend()
{
    struct node *next,*prev;
    if(head==NULL)
    {
        printf("list empty");
    }
    else if (head->next==NULL)
    {
        next=head;
        head=NULL;
        free(next);
    }
    else
    {
        next=head;
        while(next->next!=NULL)
        {
            prev=next;
            next=next->next;        
        }
        prev->next=NULL;
        free(next);
    }
}
void deatmid()
{
    struct node *next,*prev;
    if (head==NULL)
    {
        printf("list empty");
    }
    else
    {
        next=head;
        int c=0;
        while(next!=NULL)
        {
            next=next->next;
            c++;
        }
        next=head;
        printf("total no. of nodes are:%d\n",c);
        printf("pos at which you wannna delete:");
        int n;
        scanf("%d",&n);
        if (n==1)
        {
            deatbeg();
        }
        else
        {
        for (int  i = 1; i < n ; i++)
        {
            prev=next;
            next=next->next;
        }
        prev->next=next->next;
        free(next);
        }
    }
}