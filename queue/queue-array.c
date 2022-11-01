#include<stdio.h>
#include<stdlib.h>
#define max 10
int queue[max];
int front=-1,rear=-1;
void enquw();
void deque();
void peek();
int main()
{
    int t=1;
    while(t)
    {
        printf("1:enque\n2:deque\n3:peek\n");
        int s;
        scanf("%d",&s);
        switch (s)
        {
        case 1:
        enque();
        break;
        case 2:
        de();
        break;
        case 3:
        peek();
        break;
        default:
        exit(0);
        break;
        }
    }
}
void enque()
{
    int add;
    if(rear==max+1)
    {
        printf("queue overflow\n");
    }
    else
    {
        if (front==-1)
        {
            front=front+1;
        }
    printf("data:");
    scanf("%d",&add);
    rear=rear+1;
    queue[rear]=add;
    }
}
void de()
{
    if (front==-1 || front>rear)
    {
        printf("queue underflow");
    }
    else
    {
        printf("element deleted from queue is %d\n",queue[front]);
        front=front+1;
    } 
}
void peek()
{
    if (front==-1)
    {
        printf("queue empty");
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            printf("%d\t",queue[i]);
        }
    }
    printf("\n");
}