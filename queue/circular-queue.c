#include<stdio.h>
#include<stdlib.h>
void enqeue();
void dequeue();
typedef struct queue
{
    int front,rear;
    int size,capacity;
    int *arr;
}queue;
queue *createQueue()
{
    queue *q=(queue *)malloc(sizeof(queue));
    printf("capacity:");
    int capacity;
    scanf("%d",&capacity);
    q->capacity=capacity;
    q->front=q->rear=-1;
    q->size=0;
    q->arr=(int *)malloc(q->capacity*sizeof(int));
    return q;
}
void isfull(queue *q)
{
    return q->size==q->capacity;
}
void isempty(queue *q)
{
    return q->size==0;
}
void enqueue(queue *q)
{
    q->rear=(q->rear+1)%q->capacity;
    

}
