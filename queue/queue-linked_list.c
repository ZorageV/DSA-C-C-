#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front=NULL,*rear=NULL;
void in();
void delete();
void peek();
int main()
{
    while(1)
    {
    int s;
    printf("1:insert in queue\n2:delete element in an queue\n3:peek");
    scanf("%d",&s);
    switch (s)
    {
    case 1:
    in();
    break;
    case 2:
    delete();
    break;
    case 3:
    peek();
    break;
    default:exit(0);
        break;
    } 
    }  
}
void in()
{
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    printf("data:");
    scanf("%d",&newnode->data);
    if (front==NULL)
    {
        front=newnode;
    }
    else
    {
        temp=front;
        while (temp->next!=NULL)
        {
          temp=temp->next;
        }
        temp->next=newnode;
    }
    rear=newnode;
}
void peek()
{
    struct node *temp;
    temp=front;
    if (temp==NULL)
    {
        printf("queue empty");
    }
    else
    {
        do
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        } while (temp!=NULL);
        
    }
    printf("\n");
}
void delete()
{
    struct node *temp;
    temp=front;
    if(front==NULL)
    {
        printf("queue empty");
    }
    else
    {
        front=front->next;
        printf("deleted element is %d",temp->data);
        free(temp);
    }
    printf("\n");
}
