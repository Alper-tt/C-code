#include<stdio.h>
#include<string.h>

struct adres{
	
	char mahalle[11];
	char cadde[20];
	char sokak[15];
	
};

struct ogrenci{
	
	char isim[20];
	char soyisim[20];
	int no;
	int yas;
	struct adres adres1;
	
};





int main(){
	
	struct ogrenci ogrenci1;
		
	strcpy(ogrenci1.isim, "Alper");
	strcpy(ogrenci1.soyisim, "Topraktepe");
	ogrenci1.no = 2010213030;
	ogrenci1.yas = 19;
	strcpy(ogrenci1.adres1.mahalle, "Karit");
	strcpy(ogrenci1.adres1.cadde, "Kastamonu-Karabuk");
	strcpy(ogrenci1.adres1.sokak, "Ismail Necati");
	
	printf("%s %s %d %d %s %s %s", ogrenci1.isim, ogrenci1.soyisim, ogrenci1.no, ogrenci1.yas, ogrenci1.adres1.mahalle,
	ogrenci1.adres1.cadde, ogrenci1.adres1.sokak);
	
	
	return 0;
}
