#include<stdio.h>
#include<stdlib.h>


int main(){

    char str[] = "I love Programming Languages course",*ptr;
    
    int len = sizeof(str)/sizeof(char)-1;
    int temp;
    temp = len;
    ptr = str;
    puts(str);

    for(int i=len;i>=0;i--){
        
        if(*(ptr+i) == ' ' || i == 0){

            for(int j=i;j<temp+1;j++){
                printf("%c", *(ptr+j));
            }
            temp=i;
        }
    }
    return 0;
}
