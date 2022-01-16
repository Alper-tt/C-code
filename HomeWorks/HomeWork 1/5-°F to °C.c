#include<stdio.h>

int main() {
	
	float c,f;
	
	printf("Enter a fahrenheit value: ");
	scanf("%f",&f);
	
	c = (f-32)/1.8;
	
	printf("%.2f", c);
	
	return 0;
}
