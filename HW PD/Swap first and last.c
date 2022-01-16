#include<stdio.h>
#include<string.h>

int main(){
	
	int i,u,temp;;
	char str1[10];
	
	printf("Write a string: ");
	gets(str1);
		
	u = strlen(str1);
	
	temp=str1[0];
	str1[0] = str1[u-1];
	str1[u-1] = temp;
	
	printf("%s", str1);
	
	
	return 0;
}
