#include<stdio.h>
#include<math.h>

int main(){
	
	int a,b,c,x1,x2,delta;
	
	printf("Enter the value of a (ax�+bx+c): ");
	scanf("%d",&a);
	
	printf("Enter the value of b (ax�+bx+c): ");
	scanf("%d",&b);
	
	printf("Enter the value of c (ax�+bx+c): ");
	scanf("%d",&c);
	
	delta = pow(b,2) - 4*a*c;
	
	
	x1 = (-b + pow(delta,1/2))/(2*a);
	x2 = (-b - pow(delta,1/2))/(2*a);


	if(delta<0){
		printf("No root");
	}
	else if(delta=0){
		printf("There is one root: %d", x1);
	}
	else{
		printf("There are two root: x1: %d | x2: %d | delta: %d",x1,x2,delta);
	}
	
	//printf("%lf", sqrt(double (4)));
	
	return 0;
}
