#include<stdio.h>
#include<string.h>
int main(){
	
	char str1[10],str2[10];
	
	printf("Write your name: ");
	gets(str1);
	printf("Write your surname: ");
	gets(str2);
	
	printf("%s", strcat(str1,str2));
	
	return 0;
}
