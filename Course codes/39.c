#include<stdio.h>

struct student{
	
	char isim[15];
	char soyisim[15];
	int numara;
	int yas;
	
};



int main(){
	
	struct student Alper = {"Alper", "Topraktepe", 2010213030, 19};
	
	printf("%s %s %d %d", Alper.isim, Alper.soyisim,Alper.numara, Alper.yas);
	
	
	
	
	
	return 0;
}
