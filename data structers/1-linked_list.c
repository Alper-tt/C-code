#include <stdio.h>
#include <stdlib.h>


struct n
{
    int x;
    struct n* next;
};

typedef struct n node;

void bastir(node* r){

    while (r != NULL){
        printf("%d ", r->x);
        r = r->next;
    }

}



int main()
{
    node * root;
    root = (node *)malloc(sizeof(node));
    root->x = 10;
    root->next = (node *)malloc(sizeof(node));
    root->next->x = 20;
    root->next->next = (node *)malloc(sizeof(node));
    root->next->next->x = 30;
    node * iter;
    iter=root;
    printf("%d", iter->x);
    iter = iter->next;
    printf("%d", iter->x);
    iter=root;
    while (iter->next != NULL){
        printf("%d", iter->x);
        iter = iter ->next;
    }
    int i=0;
    for( i=0;i<5;i++){
        iter->next = (node*)malloc(sizeof(node));
        iter = iter->next;
        iter -> x=i*10;
    }
    bastir(root);
}