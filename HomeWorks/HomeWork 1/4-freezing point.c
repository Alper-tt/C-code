#include<stdio.h>

int main() {
	
	int c;

	printf("Enter a celcius degree: ");
	scanf("%d",&c);
	
	if(c>0){
		printf("Temprature above freezing point.");
	}
	else{
		printf("Temprature is below freezing point.");
	}
	return 0;
}
