#include<stdio.h>
#include<stdlib.h>

int main(){

    int num;
    int newNum;

    printf("Enter number of elements: ");
    scanf("%d", &num);

    int arr[num],*ptr;

    ptr = (int*)calloc(num,sizeof(int));

    for(int i=0;i<num;i++){
        printf("Enter the %d. number: ",i+1);
        scanf("%d", ptr+i);
    }

    for(int i=0;i<num;i++){
        printf("%d\t",*(ptr+i));
    }

    printf("\nEnter the number of new elements: ");
    scanf("%d", &newNum);

    ptr = (int*)realloc(ptr,newNum*sizeof(int));

    for(int i=0;i<newNum;i++){
        printf("Enter the %d. number: ",i+1);
        scanf("%d", ptr+num+i);
    }


    for(int i=0;i<num+newNum;i++){
        printf("%d\t",*(ptr+i));
    }



    return 0;
}