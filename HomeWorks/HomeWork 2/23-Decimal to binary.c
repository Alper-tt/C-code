#include <stdio.h>

int main(){
    int n,b=0,a=0,c=1;
    
    printf("Enter a decimal number: ");
    scanf("%d",&n);

    while (n>0){
    	
        a = n%2; 
        n = n/2; 
        b = b + (a*c);  
        c = c * 10;
    }
    printf("%d",b);
}
