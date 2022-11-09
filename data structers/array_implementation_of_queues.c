#include <stdio.h>
#include <stdlib.h>

#define QUEUE_SIZE 10

struct n
{
    int data;
    struct n *next;
};

typedef struct n node;

typedef struct
{
    int cnt;
    int front, rear;
    int data[QUEUE_SIZE];
} queue;

typedef struct n node;

int isEmpty(queue *q)
{
    if (q->cnt == 0)
    {
        return 1;
    }
    else
        return 0;
}

int isFull(queue *q)
{
    if (q->cnt == QUEUE_SIZE)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void initialize(queue *q)
{
    q->cnt = 0;
    q->front = -1;
    q->rear = 0;
}

void enqueue(queue *q, int x)
{
    if (isFull(q))
    {
        printf("Queue is full");
    }
    else
    {
        q->rear++;
        q->cnt++;
        if (q->rear == QUEUE_SIZE)
        {
            q->rear = 0;
        }
        q->data[q->rear] = x;
    }
}

int dequeue(queue *q)
{

    if (isEmpty(q))
    {
        printf("Queue is emty");
        return -1;
    }
    else
    {
        int x = q->data[q->front];
        q->front++;
        q->cnt--;
        if (q->front == QUEUE_SIZE)
        {
            q->front = 0;
        }
        return x;
    }
}

void display(queue *q)
{
        printf("front : %d -", q->data[q->front]);
        printf("rear : %d -", q->data[q->rear]);

    
}

int main()
{
    queue q;
    initialize(&q);
    enqueue(&q, 4);
    enqueue(&q, 5);
    enqueue(&q, 6);
    enqueue(&q, 7);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);

    display(&q);
}