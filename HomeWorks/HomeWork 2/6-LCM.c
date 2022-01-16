#include<stdio.h>
int main(){
	
	int n1,n2,i;
	
	printf("Enter the big number: ");
	scanf("%d", &n1);
	
	printf("Enter the small number: ");
	scanf("%d", &n2);
	
	for(i=2;i<=n1;i++){
		
		if(n1%i==0 && n2%i==0){	
			printf("%d ", i);
			break;
		}	
	}
	return 0;
}
