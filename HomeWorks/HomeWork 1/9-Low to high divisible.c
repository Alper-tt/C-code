#include<stdio.h>

int main() {
	
	int l,h,i;
	
	printf("Enter low number: ");
	scanf("%d",&l);
	
	printf("Enter high number: ");
	scanf("%d",&h);
		
	for(;l<=h;l++){
		
		for(i=2;l>i;i++){
			
			if(l%i==0){
				printf("%d\n", l);
				break;
			}
			
		}
		
	}
		
		
	
	return 0;
}
//3 4 5 6 7 8 9
