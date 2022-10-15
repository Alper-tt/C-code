#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char *ptr;

    ptr = (char*)malloc(20*sizeof(char));

    if(ptr==NULL){
        printf("not enough memory");
    }
    else{
        strcpy(ptr,"alper topraktepe");
    }

    printf("Dynamically allocated memory content: %s\n",ptr);
}