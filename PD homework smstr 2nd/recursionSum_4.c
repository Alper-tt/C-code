#include<stdio.h>

int main(){

    int f();
    int a;
    
    scanf("%d", &a);

    printf("%d", f(a));

}

int f(int x){
    if(x==1){
        return 1;
    }
    else{
        return x+f(x-1) ;
    }
}