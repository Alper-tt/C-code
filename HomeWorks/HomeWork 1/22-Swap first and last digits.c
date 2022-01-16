#include<stdio.h>
#include<math.h>

int main(){
	
	int n,c,l,f,t;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	t=n;
	
	while(n>0){
		n/=10;
		c++;
	}
	
	l = t%10;
	f = t/pow(10,c-1);
	printf ("l : %d | f : %d | c : %d ", l,f,c);
	
	t = t-l; 
	t = t - f*pow(10,c-1); 

	n = l; 
	l = f; 
	f = n; 
	
	t = t+l; 
	t = t+f*pow(10,c-1);
	
	printf("%d ", t);
	
	return 0;
}

