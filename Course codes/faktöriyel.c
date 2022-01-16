#include<stdio.h>

int main(){
	
	int i,j;
	
	j=1;
	
	printf("Sayý giriniz : ");
	scanf("%d", &i);
	
	for(;i>0;i--){

	j = j*i;
	
	}
	printf("%d", j);
	
	return 0;
}
