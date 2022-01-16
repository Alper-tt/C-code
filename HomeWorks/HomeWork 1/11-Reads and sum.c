#include<stdio.h>

int main() {
	int arr[10],sum,i;
	
	for(i=0;i<10;i++){
	
		printf("Enter a number: ");
		scanf("%d", &arr[i]);
	}
	
	for(i=0;i<10;i++){
	
		printf("%d \n", arr[i]);
	}
	
	for(i=0;i<10;i++){
	
		sum += arr[i];
	}
	printf("Sum : %d", sum);
	
	return 0;
}
