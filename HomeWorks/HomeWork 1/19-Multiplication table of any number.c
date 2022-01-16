#include<stdio.h>

int main(){
	
	int n,i;
	
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for(i=1;i<11;i++){
		printf("%d\n", n*i);
	}
	return 0;
}
