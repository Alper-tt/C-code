#include<stdio.h>

int checknum(int num){
    int ld,d,check=0;
    ld = num%10;

    while(num>0){
        d = num%10;
        num /=10;

        if(ld == d){
            check = 1;
        }
        else{
            check = 0;
            break;
        }
    }
    return check;
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(checknum(num) == 1){
        printf("%d >>> All digits are equal.",num);
    }
    else{
        printf("%d >>> All digits are not equal.", num);
    }
}