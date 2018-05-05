#include<stdio.h>
#define SIZE 100
int arr[SIZE];
int front=-1;
int rear=-1;
void enque(int value)
{
    if(rear>SIZE)
    {
        printf("overflow\n");
    }

    if(front==-1 && rear==-1)
    {
        front++;
        rear++;
        arr[rear]=value;
    }
    else{
        rear++;
        arr[rear]=value;
    }
}
void deque()
{
    front++;
    printf("\n");
}
void traverse()
{
    int i=0;
    for(i=front;i<=rear;i++)
    {
        printf("%d\n",arr[i]);
    }
}
void main()
{
    enque(19);
    enque(20);
    traverse();
    printf("queue after deletion:");
    deque(19);
    traverse();
}
