#include<stdio.h>

int main(){
	
	int n,r,i,s=0;
	
	printf("Enter a number: ");
	scanf("%d", &n);

	for(i=1;i<n;i++){
		
		r = n%i;
		
		if(r==0){
			s = s + i;
		}
	}
	
	
	if(s==n){
			printf("%d", s);
	}
	
	
	
	
	
	return 0;
}
