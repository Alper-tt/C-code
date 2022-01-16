#include<stdio.h>  


int main(){

	int i,t,a,n,m;
	
	printf("Enter number of raws: ");
	scanf("%d", &t);
	
	
	for(a=1;a<=t;a++){
		
		if(a%2==0){
			n = 1;
			m = 0;
		}
		else{
			n = 0;
			m = 1;
		}
		
		for(i=1; i<=a; i++){
		
			if(i%2==0){
				printf("%d",n);
			}
			else if(i%2==1){
				printf("%d",m);
			}
		}
		printf("\n");
		
	}
	
return 0;  
}
