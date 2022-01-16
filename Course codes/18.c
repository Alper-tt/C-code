#include<stdio.h>

int main() {
	
	float toplam, sayilar[5];
	int i;
	
	for (i=0; i<5; i++) {
	
		printf("Sayi giriniz: ");
		scanf("%f", &sayilar[i]);
		
		toplam = toplam + sayilar[i];	
	}
	

	
	printf("Girilen sayilarin aritmetik ortalamasi : %.2f", toplam/5);
	return 0;
}
