#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    int no=2010213030,sum,length=5;
    char name[5]="alper",*ptr;
    ptr=name;
    
    ptr = (char*)malloc(length*sizeof(char));

    while (no>0)
    {
        sum += no%10;
        no /= 10;
    }
    
    ptr = (int*) realloc(ptr,(length+sum)*sizeof(int));

    for(int i=0;i<sum/length;i++){
        for(int j=0;j<5;j++){
            printf("%c",name[j]);
        }
    }



    return 0;
}