#include<stdio.h>
#include<string.h>

int main() {
	
	FILE *filep;
	
	char text[256];
	
	filep = fopen("alper.txt", "a");
	
	if(filep == NULL){
		
		printf("Dosya olusmadi");
	}
	else {
		printf("Birsey yazin: ");
		fgets(text,256, stdin);
		fputs(text, filep);
		printf("Dosyaya yazildi");
		fclose(filep);
		
	}
	return 0;
}
