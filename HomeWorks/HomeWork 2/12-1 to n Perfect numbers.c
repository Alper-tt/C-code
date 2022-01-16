#include<stdio.h>

int main(){
	
	int a,n,r,i,s=0;
	
	printf("Enter a number: ");
	scanf("%d", &n);

	for(a=1;a<=n;a++){
	
		r=0;
		s=0;
	
		for(i=1;i<a;i++){
		
			r = a%i;
		
			if(r==0){
				s = s + i;
			}
		}
	
	
		if(s==a){
				printf("%d is perfect number.\n", a);
		}
		
	}
	
	
	return 0;
}
