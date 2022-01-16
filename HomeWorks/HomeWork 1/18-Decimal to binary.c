#include<stdio.h>

int main(){
	
	int arr[10],d,j,i;
	
	printf("Enter a decimal number: ");
	scanf("%d", &d);
	
	for (i=0;d>0;i++){
		
		arr[i] = d%2;
		d/=2;
	}
	
	for(j = i-1;j>=0;j--){
		printf("%d", arr[j]);
		
	}


	return 0;
}
