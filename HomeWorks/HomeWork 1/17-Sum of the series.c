#include<stdio.h>

int main(){
	
	int i,n;
	float sum=0.0;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for(i=2.0;i<=n;i+=2.0){
		sum += 1.0/i;
	}
	printf("%f", sum);
	
	return 0;
}
