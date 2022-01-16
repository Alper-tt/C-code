#include<stdio.h>

struct student{
	
	char isim[20];
	char soyisim[20];
	int numara;
	
};



int main(){
	struct student students[3];
	int i;
	
	for (i=0;i<3;i++){
		printf("%d. ogrencinin bilgilerini girin : ", i+1);
		scanf("%s %s %d", &students[i].isim, &students[i].soyisim, &students[i].numara);
		
		
	}
	
	for (i=0;i<3;i++){
	printf("%d. ogrencinin bilgileri : %s %s %d\n",i+1, students[i].isim, students[i].soyisim, students[i].numara);
		
		
	}
	
	
	
	return 0;
}
