#include<stdio.h>

int main() {
	
	int a,b,c;
	
	printf("Bir sayi giriniz : ");
	scanf("%d", &a);
	
	
	printf("Bir sayi giriniz : ");
	scanf("%d", &b);
	
	printf("Bir sayi giriniz : ");
	scanf("%d", &c);
	
	if (a>b && a>c){
			
		printf("%d sayisi en buyuk",a);
	}
		
	else if(b>a && b>c){
		
		printf("%d sayisi en buyuk",b);
			
	}
	else {
		printf("%d sayisi en buyuk.",c);
		
	}
	
	return 0;
}
