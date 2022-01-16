#include<stdio.h>

 /*w = yeni dosya acma
   r = oku
   a = varolan dosyayý degýstýrme
   w+ = okuma yazma
   r+ = "
   a+ = "
*/


int main() {
	
	FILE *filep = fopen("alper.txt", "w"); 
	
	if (filep == NULL) {
		
		printf("Dosya bulunamadi");
		
	}
	else {
		
		printf("Dosya olusuturuldu");
		
	}
	return 0;
}
