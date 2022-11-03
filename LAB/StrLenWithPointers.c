#include<stdio.h>

int StrLen(char *ptr);

int main(){
    char str[100];
    char *ptr;

    ptr=str;

    printf("Enter a string: ");
    gets(str);
    printf("Length of string: %d", StrLen(ptr));

}

int StrLen(char *ptr){

    int n=0;

    while(*ptr !='\0'){
        n++;
        ptr++;
    }

    return n;


}