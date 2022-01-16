#include<stdio.h>

int main(){
	
	int n,c;
	
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	while(n>0){
		n/=10;
		c++;
	}
	printf("%d", c);

	return 0;
}
