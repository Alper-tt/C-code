#include<stdio.h>
#include<stdlib.h>

int main(){
    int no=2010213030,*ptri,a,j=0,k=0;
    char *ptrc;


    ptri = (int*)malloc(1*sizeof(int));
    ptrc = (char*)malloc(1*sizeof(char));

    for(int i=0;i<10;i++){

        a = no%10;
        no /= 10;

        if(a%2==1){
            ptri=(int*)realloc(ptri,1*sizeof(int));
            *(ptri+j) = a;
            j++;
        }
        else{
            ptrc = (char*)realloc(ptrc,1*sizeof(char));
            *(ptrc+k) = a;
            k++;
        }
    }

        printf("Even numbers are: \n");

        for(int i=0;i<j;i++){
            printf("%d\n",*(ptri+i));
        }
        printf("\n\n\nOdd numbers are: \n");

        for(int i=0;i<k;i++){
            printf("%d\n",*(ptrc+i));
        }



}