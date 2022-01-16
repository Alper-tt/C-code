#include<stdio.h>

int main(){
	
	int x,y,a,p;
	
	printf("Enter a side length: ");
	scanf("%d", &x);
	
	printf("Enter a side length: ");
	scanf("%d", &y);
	
	a = x*y;
	p = 2*(x+y);
	
	printf("Area of the rectangle: %d\nPerimeter of rectangle: %d",a,p);
	
	
	return 0;
}
