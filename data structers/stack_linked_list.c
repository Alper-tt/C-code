#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct 
{
    int cnt;
    struct node *top;
}stack;

typedef struct n node;

#define STACK_SIZE 10
void initalize(stack *stk);
void push(stack *stk, int x);
int pop(stack *stk);
int peek(stack*stk);

void initalize(stack *stk){
    stk->cnt=0;
    stk->top=NULL;
}

void push(stack * stk, int x)
{

    if(stk->cnt == STACK_SIZE){
        printf("Stack is full");
    }
    else{
        struct node *temp = (struct node*)malloc(sizeof(struct node));
        temp->data = x;
        temp->next=stk->top;
        stk->top=temp;
        stk->cnt++;
    }
};

int pop(stack *stk){
    if(stk->cnt == 0 ){
        printf("eleman bulunamadi");
        return -1;
    }
    else{
        int x = stk->top->data;
        struct node * temp = stk->top;
        stk->top = temp->next;
        free(temp);
        stk->cnt--;
        return x;
    }
};

int peek(stack *stk)
{
   if(stk->cnt==0){
       printf("eleman bulunamadi");
       return -1;
   }
   else{
       int x = stk->top->data;
       return x;
   }
   
};

int main()
{
    stack *stk = (stack*)malloc(sizeof(stack));
    initalize(stk);
    push(stk, 1);
    push(stk, 100);
    push(stk, 10);
    push(stk, 5);
    push(stk, 3);
    push(stk, 4);
    pop(stk);
    pop(stk);
    pop(stk);
    printf("----%d-----",peek(stk));

}
