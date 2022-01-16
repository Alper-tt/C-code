#include<stdio.h>

int main() {
	
	float c,f;
	
	printf("Enter a feet value: ");
	scanf("%f", &f);
	
	c = f*30.48;
	
	printf("%.2f", c);
	
	return 0;
}
