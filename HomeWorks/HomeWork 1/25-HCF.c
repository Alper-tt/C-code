#include<stdio.h>

int main(){
	
	int n1,n2,t=0;
	
	printf("Enter the big number: ");
	scanf("%d", &n1);
	
	printf("Enter the small number: ");
	scanf("%d", &n2);

	t = n2;
	
	for (;n2>0;n2--){
		if (n1%n2==0 && t%n2==0){
			printf("%d\n",n2);
			break;
		}
		
	}	
	
	
	return 0;
}
