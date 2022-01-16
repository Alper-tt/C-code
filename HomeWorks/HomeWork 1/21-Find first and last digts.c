#include<stdio.h>
#include<math.h>

int main(){
	
	int n,t,f,l,c;

	printf("Enter a number: ");
	scanf("%d", &n);
	
	t=n;
	
	while(n>0){
		n = n/10;
		c++;
	}
	
	
	l = t%10;
	f = t/pow(10,c-1);
	
	printf("First : %d | Last : %d", f,l);
	
	return 0;
}
