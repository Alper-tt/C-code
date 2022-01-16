#include<stdio.h>
#include<math.h>

int main(){
	
	int sum=0,t,x,i;
	
	printf("Enter the x number: ");
	scanf("%d", &x);
	
	printf("Enter the number of terms: ");
	scanf("%d", &t);
	
	t*=2;
	
	for(i=1;i<=t;i+=2){
		
		sum += pow(x,i);
		
	}
	printf("%d", sum);
	
	
	
	
	
	return 0;
}
