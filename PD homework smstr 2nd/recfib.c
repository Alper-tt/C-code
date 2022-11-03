#include<stdio.h>

int main(){
    int x;
    scanf("%d", &x);

    int fib[x];

    fib[0] = 1;
    fib[1] = 1;

    for (int i=0;i<x-2;i++){

        fib[i+2] = fib[i+1]+fib[i];

    }
    for(int i=0;i<x;i++){
        printf("\t%d",fib[i]);
    }
    printf("\n%d", sizeof(fib)/4);
    
return 0;
}
