#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char *ptr;

    ptr = (char*)malloc(5*sizeof(char));

    if(ptr==NULL){
        printf("not enough memory");
    }
    else{
        strcpy(ptr,"alper");
    }
    printf("Dynamically allocated memory content: %s\n",ptr);

    ptr = (char*)realloc(ptr,10*sizeof(char));

    if(ptr==NULL){
        printf("not enough memory");
    }
    else{
        strcpy(ptr,"alper topraktepe");
    }

    printf("Resized memory: %s\n",ptr);

    free(ptr);





}