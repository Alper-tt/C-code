#include<stdio.h>

int f(int x);

int main(){

    int a;
    
    scanf("%d", &a);

    printf("%d", f(a));

    return 0;

}

int f(int x){
    if(x>0){
        f(x-1);
        printf("\n%d",x);
    }
    else NULL;
}