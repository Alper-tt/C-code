#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    int employeeNo;
    struct node *next;
    struct node *prev;
} node;

typedef node n;


void display(node *head)
{
    struct node *iter = head;
    while (iter != NULL)
    {
        printf("%d ", iter->employeeNo);
        iter = iter->next;
    }
}

struct node *add(struct node *head, int employeeNo)
{
    struct node *temp = (node *)malloc(sizeof(node));
    struct node *temp2;

    temp->employeeNo = employeeNo;

    if (employeeNo <= head->employeeNo)
    {
        temp->next = head;
        temp->prev = NULL;
        head->prev = temp;
        return temp;
    }
    else
    {
        struct node *current = head;
        while (current->next!=NULL && employeeNo > current->next->employeeNo)
        {
            current = current->next;
        }
        if (current->next == NULL)
        {
            current->next = temp;
            temp->next = NULL;
            temp->prev = current;

        }
        else{
            temp2 = current->next;
            current->next = temp;
            temp->next = temp2;
            temp->prev = current;
            temp2->prev = temp;
        }
        return head;
    }
}

int main()
{
    node *head;
    head = (node *)malloc(sizeof(node));

    head->prev = NULL;
    head->prev = NULL;
    head->employeeNo = 1;
    head = add(head,3);
    head = add(head,6);
    head = add(head,9);
    head = add(head,4);
    head = add(head,5);
    head = add(head,2);
    head = add(head,8);
    head = add(head,10);
    head = add(head,11);

    display(head);
}

