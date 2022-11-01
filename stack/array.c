#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
    int capacity;
    int top;
    int *arr;
}stack;
stack* inistack(int capacity)
{
    stack *s=(stack *)malloc(sizeof(stack));
    s->capacity=capacity;
    s->top=-1;
    s->arr=(int*)malloc(sizeof(int)*capacity);
    return s;
}
int size(stack *s)
{
    return s->top+1;
}
int isempty(stack *s)
{
    return s->top==-1;
}
int isfull(stack *s)
{
    return s->top==s->capacity-1;
}
void push(stack *s, int data)
{
    if(isfull(s))
    {
        printf("overflow\n");
        return;
    }
    s->top++;
    s->arr[s->top]=data;
}
int peek(stack *s)
{
    if(isempty(s))
    {
        printf("stack empty\n");
        return -1;
    }
    return s->arr[s->top];
}
int pop(stack *s)
{
    if(isempty(s))
    {
        printf("underflow\n");
        return -1;
    }
    int e=s->arr[s->top];
    s->top--;
    return e;
}
int main()
{
    int capacity,choice;
    printf("capacity of stack:");
    scanf("%d",&capacity);
    stack *s=inistack(capacity);
    while(1)
    {
    printf("1:push\n2:pop\n3:peek\n4:size\n5:isempty\n6:isfull\n7:exit\n");
    printf("choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    int data;
    printf("data:");
    scanf("%d",&data);
    push(s,data);
    break;
    case 2:
    int m1=pop(s);
    printf("%d",m1);
    break;
    case 3:
    int m2=peek(s);
    printf("%d",m2);
    break;
    case 4:
    int m3=size(s);
    printf("%d",m3);
    break;
    case 5:
    int m4=isempty(s);
    printf("%d",m4);
    break;
    case 6:
    int m5=isfull(s);
    printf("%d",m5);
    break;
    case 7:
    exit(0);
    }
    }
    return 0;
}

