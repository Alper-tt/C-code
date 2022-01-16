#include<stdio.h>

int main(){
	
	int t,i,s=1,r=1;
	
	printf("Enter number of terms: ");
	scanf("%d", &t);
	
	for(i=1;i<t;i++){
		
		s*=10;
		s+=1;
		r+=s;
		
	}
	printf("%d", r);
	
	
	
	return 0;
}
