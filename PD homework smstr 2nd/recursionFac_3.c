#include<stdio.h>

int main(){
    int f();

    int x;

    scanf("%d", &x);

    printf("%d", f(x));


}


int f(int x){
    if(x==1){
        return 1;
    }
    else{
        return x*f(x-1);
    }
}
