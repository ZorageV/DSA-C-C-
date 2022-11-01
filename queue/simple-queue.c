#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max];
int front=-1;
int rear=-1;
void enqueue(int queue[]);
void dequeue(int queue[]);
void peek(int queue[]);
void display(int queue[]);
void isfull(int queue[]);
void isempty(int queue[]);
int main()
{
    while(1)
    {
        printf("1:enqeue\n2:deqeue\n3:display\n4:peek\n5:isfull\n6:isempty\n7:exit\nchoice:");
        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            enqueue(queue);
            break;
            case 2:
            dequeue(queue);
            break;
            case 3:
            display(queue);
            break;
            case 4:
            peek(queue);
            break;
            case 5:
            isfull(queue);
            break;
            case 6:
            isempty(queue);
            break;
            case 7:
            exit(0);
        }
    }
    return 0;
}
void enqueue(int queue[])
{
    if((rear+1)==max)
    {
        printf("queue full\n");
        return;
    }
    else
    {
    int data;
    printf("data:");
    scanf("%d",&data);
    if(front==-1)
    {
        front=front+1;
        rear=rear+1;
        queue[rear]=data;
    }
    else
    {
        rear=rear+1;
        queue[rear]=data;
    
    }
    }
}
void dequeue(int queue[])
{
    if(front==-1)
    {
        printf("queue empty");
        return;
    }
    else if ((front+1)==max)
    {
        printf("queue underflow");
    }
    else
    {
        front=front+1;
    }
}
void display(int queue[])
{
    if(front==-1&&rear==-1)
    {
        printf("queue empty\n");
    }
    else if((rear+1)==max&&(front+1)==max)
    {
        printf("queue overflow\n");
    }
    else
    {
        int temp=front;
        while(temp<=rear)
        {
            printf("%d\t",queue[temp]);
            temp++;
        }
    }
    printf("\n");
}
void peek(int queue[])
{

}
void isfull(int queue[])
{

}
void isempty(int queue[])
{

}