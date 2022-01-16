#include<stdio.h>

int main() {
	int l,h,sum=0;
	
	printf("Enter low number: ");
	scanf("%d",&l);
	
	printf("Enter high number: ");
	scanf("%d",&h);
	
	for(;l<=h;l++){
		
		sum = sum+l;
		
	}
	printf("%d", sum);
	
	return 0;
}
