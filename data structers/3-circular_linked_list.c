#include <stdio.h>
#include <stdlib.h>

struct n
{
    int x;
    struct n *next;
};

typedef struct n node;

void bastir(node *r)
{
    node *iter = r;
    printf("%d ", iter->x);
    iter = iter->next;

    while (iter != r)
    {
        printf("%d ", iter->x);
        iter = iter->next;
    }
    printf("\n");
}

void ekle(node * r, int x)
{
    node *iter = r;
    while (iter->next != r)
    {
        iter = iter->next;
    }
    iter->next = (node *)malloc(sizeof(node));
    iter->next->x = x;
    iter->next->next = r;
}

void sil(node * r, int x){
    node * iter = r;
    node * temp;
    while (iter->next->x != x){
        iter = iter->next;
        temp = iter ->next->next;
    }
    free(iter->next);
    iter->next = temp;
}



int main()
{
    node *root;
    root = (node *)malloc(sizeof(node));
    root->x = 2;
    root->next = root;

    for(int i=0;i<5;i++){
        ekle(root,i*10);
    }
    /*bastir(root);
    sil(root, 40);
    bastir(root);*/
    bastir(root);
    ekle(root,50);
    bastir(root);

}