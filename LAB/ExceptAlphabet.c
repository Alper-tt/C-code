#include <stdio.h>-
#include <string.h>

int main(){
    int i,u,j;
    char a[20],b[20];
    printf("Enter a string: ");
    gets(a);


    for(i=0;a[i]!='\0';i++){
        if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z')){
            b[j]=a[i];
            j++;
        }
    }
    
    printf("Cikti: ");
    puts(b);
    printf("\n");
    return 0;
}
