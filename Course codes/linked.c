#include<stdio.h>
#include<stdlib.h>

struct student
{
    int no;
    char name[10];
    struct student *next
};

typedef struct student student;


int main(){

    student *new;
    new = (student*)malloc(sizeof(student));
    new->next = (student*)malloc(sizeof(student));

    
    

}
