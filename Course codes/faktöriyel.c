#include<stdio.h>

int main(){
	
	int i,j;
	
	j=1;
	
	printf("Say� giriniz : ");
	scanf("%d", &i);
	
	for(;i>0;i--){

	j = j*i;
	
	}
	printf("%d", j);
	
	return 0;
}
