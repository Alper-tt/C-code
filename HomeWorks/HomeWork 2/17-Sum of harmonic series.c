#include<stdio.h>

int main(){
	
	int i;
	float sum=0.0,t;

	printf("Enter number of terms: ");
	scanf("%f", &t);
	
	
	for(i=1;i<=t; i++){
		
		sum += 1.0/i;
		
	}
	
	printf("%.2f", sum);
	
	
	
	return 0;
}
