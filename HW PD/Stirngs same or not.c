#include<stdio.h>

int main(){
	int i,a=0;
char str1[30], str2[30];

printf("Enter a string: ");
gets(str1);
printf("Enter a string: ");
gets(str2);

for(i=0;str1[i]==str2[i];i++){
}

if(i==strlen(str1) && i==strlen(str2)){
	printf("Strings same.");
}
else{
	printf("a");
}
return 0;	
}


