#include<stdio.h>
#include<string.h>

int main() {
	
	char veri[25] = "alper";
	int uzunluk = strlen(veri);
	int i;
	
	
	FILE *filep = fopen("alper.txt", "w");
	
	if (filep == NULL){
		
		printf("Dosya olustulamadi");
		
	}
	else {
		for (i=0;i<uzunluk;i++){
			
			fputc(veri[i], filep);
			printf("Yazilan karakter %c\n", veri[i]);
			
		}
		printf("Dosya olusturuldu");
		fclose(filep);
	}
	
	
	return 0;
}
