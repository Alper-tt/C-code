#include<stdio.h>

struct student{
	
	char isim[15];
	char soyisim[15];
	int numara;
	
};
void goster(struct student a) {
	
	printf("Ogrencinin bilgileri: %s %s %d", a.isim, a.soyisim, a.numara);
	
	
}
struct student degerAl() {
	
	struct student yeni;
	printf("Bilgileri giriniz: ");
	scanf("%s %s %d", &yeni.isim, &yeni.soyisim, &yeni.numara);
	
	return yeni;
	
}



int main(){
	
	struct student Alper = degerAl();
	
	goster(Alper);
	
	
	
	
	
	return 0;
}
