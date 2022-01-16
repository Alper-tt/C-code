#include<stdio.h>

int main() {
	
	int l,h,s;
	
	printf("Enter low number: ");
	scanf("%d", &l);
	
	printf("Enter high number: ");
	scanf("%d", &h);
	
	printf("Enter the step number: ");
	scanf("%d", &s);
	
	
	
	for(;l<=h;l+=s){
		
		printf("%d\n",l);
		
	}
	
	
	return 0;
}
