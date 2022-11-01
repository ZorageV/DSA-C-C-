#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
    int data;
    struct stack *next;  
}stack;
int top=0;
struct stack *head=NULL;
void push();
void pop();
void peek();
void display();
void size();
void isempty();
int main()
{
    while(1)
    {
        printf("1:push\n2:pop\n3:peek\n4:display\n5:size\n6:isempty\n7:exit\n");
        int t;
        printf("choice:");
        scanf("%d", &t);
        switch(t)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            peek();
            break;
            case 4:
            display();
            break;
            case 5:
            size();
            break;
            case 6:
            isempty();
            break;
            case 7:
            exit(0);       
        }
    }
    return 0;
}
void display()
{
    if(head==NULL)
    {
        printf("stack empty\n");
        return;
    }
    else
    {
        printf("stack:\t");
        stack *temp=head;
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
void push()
{
    struct stack *newelement;
    newelement=(stack *)malloc(sizeof(stack));
    printf("data:");
    scanf("%d",&newelement->data);
    newelement->next=NULL;
    if(head==NULL)
    {
        head=newelement;
        top++;
    }
    else
    {
        head;
        newelement->next=head;
        head=newelement;
        top++;
    }
}
void pop()
{
    if(head==NULL)
    {
        display();
        return;
    }
    else 
    {
        stack *temp=head;
        head=head->next;
        printf("popped:%d\n",temp->data);
        free(temp);
        top--;
    }
}
void peek()
{
    printf("%d\n",head->data);
}
void size()
{
    printf("stack size is %d\n",top);
}
void isempty()
{
    if(top==0)
    {
        printf("stack empty\n");
    }
    else
    {
        printf("stack not empty\n");
    }
}
