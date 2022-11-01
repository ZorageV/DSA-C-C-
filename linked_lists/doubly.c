#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
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
void create()
{
    struct node *newnode,*next,*prev;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    newnode->prev=NULL;
    printf("data:");
    scanf("%d",&newnode->data);
    if (head==NULL)    
    {
        head=newnode;
    }
    else
    {
        next=head;
        while (next->next!=NULL)
        {
            next=next->next;
        }
        next->next=newnode;
        newnode->prev=next;
    }
}
void display()
{
    struct node *next=NULL;
    if (head==NULL)
    {
        printf("list empty\n");
    }
    else
    {
        next=head;
        while (next!=NULL)
        {
            //printf("%x\t",next->prev);
            printf("%d\t",next->data);
            //printf("%x\t",next->next);
            next=next->next;
        }
    }
    printf("\n");
}
void inatbeg()
{
    struct node *newnode,*next,*prev;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->next=NULL;
    newnode->prev=NULL;
    printf("data:");
    scanf("%d",&newnode->data);
    if (head==NULL)
    {
        head=newnode;
    }
    else
    {
        head->prev=newnode;
        newnode->next=head;
        head=newnode;
    }
}
void inatend()
{
    struct node *newnode,*next=NULL;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    newnode->prev=NULL;
    if (head->next==NULL)
    {
        inatbeg();
    }
    else
    {
        next=head;
        printf("data:");
        scanf("%d",&newnode->data);
        while (next->next!=NULL)
        {
            next=next->next;
        }
        newnode->prev=next;
        next->next=newnode;
    }
    
}
void inatmid()
{
    struct node *newnode,*next,*prev;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->next=NULL;
    newnode->prev=NULL;
    if (head==NULL)
    {
        inatbeg();
    }
    else
    {
        int c=0;
        next=head;
        while (next!=NULL)
        {
            next=next->next;
            c++;
        }
        int n;
        printf("total no. of nodes are:%d",c);
        printf("at which pos you wanna insert:");
        scanf("%d",&n);
        printf("data:");
        scanf("%d",&newnode->data);
        if (n==1)
        {
            inatbeg();
        }
        else
        {
            next=head;
            for (int i = 1 ; i < n; i++)
            {
                prev=next;
                next=next->next; 
            }
            newnode->prev=prev;
            newnode->next=next;
            prev->next=newnode;
            next->prev=newnode;
        }
    }
}
void deatbeg()
{
    struct node *next,*prev;
    if (head==NULL)
    {
        printf("list empty");
    }
    else if (head->next==NULL)
    {
        free(head);
        head=NULL;
    }
    else
    {
    next=head;
    head=head->next;
    head->prev=NULL;
    free(next);
    }
}
void deatend()
{
    struct node *next,*prev;
    if (head==NULL)
    {
        printf("list empty");
    }
    else if (head->next==NULL)
    {
        free(head);
        head=NULL;
    }
    else
    {
        next=head;
        while (next->next!=NULL)
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
        display();
    }
    else if (head->next==NULL)
    {
        free(head);
        head=NULL;
    }
    else
    {
        int c=0;
        next=head;
        while (next!=NULL)
        {
            next=next->next;
            c++;
        }
        printf("total no. of nodes are:%d\n",c);
        printf("at which pos you wanna delete:");
        int n;
        scanf("%d",&n);
        if (n==1)
        {
            deatbeg();
        }
        else if (n==c)
        {
            deatend();
        }
        else
        {
            next=head;
            for (int i = 1 ; i<n; i++)
            {
                prev=next;
                next=next->next;
            }
            prev->next=next->next;
            next->next->prev=prev;
            free(next);
        }
    }
}