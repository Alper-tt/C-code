#include<stdio.h>

int main(){
	
	int n,d=0,a,b=1;
	
	printf("Enter a binary number: ");
	scanf("%d", &n);
	
	while(n>0){
		
		a = n%10;
		d += (a*b);
		n /= 10;
		b *= 2;
	}
	printf("%d", d);
	
	
	return 0;
}
