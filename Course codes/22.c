#include<stdio.h>
void hatayibas(int hata){
	
	printf("hata kodu %d", hata);

}

/*
Fonksiyon Tan�mlama

Donustipi fonksiyonadi(parametreler){
	Fonksiyon blogu
	
	yap�lacak �slemler
	
}

	void = birsey dondurmeyen fonks�yonlar

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
