#include<stdio.h>

int main() {
	
	int a,b,c;
	
	printf("Enter a number : ");
	scanf("%d", &a);
	
	
	printf("Enter a number : ");
	scanf("%d", &b);
	
	printf("Enter a number : ");
	scanf("%d", &c);
	
	if (a>b && a>c){
			
		printf("%d is largest.",a);
	}
		
	else if(b>a && b>c){
		
		printf("%d is largest.",b);
			
	}
	else {
		printf("%d is largest.",c);
		
	}
	
	return 0;
}
