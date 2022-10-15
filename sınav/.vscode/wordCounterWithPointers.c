#include<stdio.h>
#include<string.h>


int main(){

    int counter=0;
    char str[100], *ptr;

    printf("Enter a text or sentence: ");
    gets(str);
    ptr = str;
    

    for(int i=0;*(ptr+i)!='\0';i++){
        if(*(ptr+i) == ' '){
            counter += 1;
        }
    }

    printf("Number of words: %d", counter+1);


    return 0;
}