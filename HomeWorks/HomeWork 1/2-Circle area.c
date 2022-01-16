#include <stdio.h>

#define PI 3.14

int main(){
	int r;
	float a;
	
	printf("Enter a radius: ");
	scanf("%d", &r);
	
	a = PI*r*r;
	
	printf("%f",a);
	
	
	return 0;
}
