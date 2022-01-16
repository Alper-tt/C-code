#include<stdio.h>
void hatayibas(int hata){
	
	printf("hata kodu %d", hata);

}

/*
Fonksiyon Tanýmlama

Donustipi fonksiyonadi(parametreler){
	Fonksiyon blogu
	
	yapýlacak ýslemler
	
}

	void = birsey dondurmeyen fonksýyonlar

*/
int main() {
	int sayi;
	
	printf("Lutfen negatif olmayan bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	if (sayi<0){
	
	
	hatayibas(404);
	
	}
	
	else{
		printf("Tebrikler!");
	}
	return 0;
}
