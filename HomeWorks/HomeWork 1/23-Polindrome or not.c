#include<stdio.h>

int main(){
	
	int n,t,i,p;
	
	
	printf("Enter a number : ");
	scanf("%d", &n);
	
	t = n;
	
	while(n>0){
		i = n%10;
		p = (p*10)+i;
		n /= 10;
	}
	
	if (t==p){
		printf("%d is polindrome number.",t);
	}
	else {
		printf("%d is not a polinrome number", t);
	}
	
	return 0;
}
