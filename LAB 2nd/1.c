#include<stdio.h>
#include<stdlib.h>

int main(){
    int num,el=1,arr[100],*ptr,i;

    ptr=arr;
    ptr=(int*)malloc(0*sizeof(int));

    while (el!=0)
    { 
        printf("Enter a number (0 exit): ");
        scanf("%d", &el);
        ptr=(int*) realloc(ptr,1*sizeof(int));
        *(ptr+i)=el;
        i++;
    }

    for(int a=1;a<i;a++){
        printf("%d\n",*(ptr+a));
    }
    

}