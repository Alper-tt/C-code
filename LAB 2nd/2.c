#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char str[100],*ptr,str2[100],*ptr2,len1,len2,*ptr3,len3;
    printf("Enter first string: ");
    gets(str);

    ptr=str;

    printf("Enter second string: ");
    gets(str2);

    ptr2=str2;

    len1=strlen(str);
    len2=strlen(str2);

    len3 = len1+len2;

    ptr3=(int*) malloc(len1*sizeof(int));

    for(int i=0;i<len1;i++){
        *(ptr3+i) = *(ptr+i);
    }

    ptr3=(int*) realloc(ptr3,len2*sizeof(int));

    for(int i=0;i<len2;i++){
        *(ptr3+len1+i) = *(ptr2+i);
    }

    puts(ptr3);



    
}