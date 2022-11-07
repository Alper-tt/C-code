#include <stdio.h>
#include <stdlib.h>

struct n
{
    int x;
    struct n *next;
    struct n *prev;
    
};

typedef struct n node;

void bastir(node *r)
{

    while (r != NULL)
    {
        printf("%d ", r->x);
        r = r->next;
    }
}

void ekle(node *r, int x)
{
    while (r->next != NULL)
    {
        r = r->next;
    }
    r->next = (node *)malloc(sizeof(node));
    r->next->prev =r;
    r->next->x = x;
    r->next->next = NULL;
}

void sil(node *r, int x){
    node * temp = r;

    while(r->next->x != x ){
        r = r ->next;
        temp = r->next->next;
    }

    free(r->next);
    r->next = temp;
    temp->prev =r;

}


int main()
{
    node *root;
    root = (node *)malloc(sizeof(node));
    root->next = NULL;
    root->prev = NULL;
    root->x = 2;
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        ekle(root, i * 10);
    }

    bastir(root);
    sil(root, 10);
    bastir(root);
}