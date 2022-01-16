#include<stdio.h>
#include<string.h>

struct ogrenci{
	
	char isim[20];
	char soyisim[20];
	int numara;
	
};
struct ogrenci *degerAl(struct ogrenci *p){
	
	strcpy(p->isim,"a");
	strcpy(p->soyisim,"Y");
	p->numara = 381;
	
	return p;
}
void goster(struct ogrenci *p){
	
	printf("ogrenci bilgileri \nIsim: %s\nSoyisim: %s\nNumara: %d", p->isim, p->soyisim, p->numara);

}




int main(){
	struct ogrenci *tut;
	struct ogrenci ogrenci1 = {"Alper","Topraktepe",201};
	
	tut = degerAl(&ogrenci1);
	
	printf("%s %s %s", tut->isim, tut->soyisim,tut->numara);
	
	
	
	
	
	return 0;
	
}
