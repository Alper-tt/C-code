#include<stdio.h>
#include<string.h>

int main(){
    char a[10], b[10];
    printf("Enter the name: ");
    gets(a);
    printf("Enter the surname: ");
    gets(b);

    puts(strcat(a,b));


    return 0;
}