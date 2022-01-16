#include<stdio.h>
int main() {
	// 1234 rakamlarý toplamý; kaç haneli oldugu
	
	int a,n,hane=0,toplam=0;
	printf("sayiyi giriniz:");
	scanf("%d", &n);
	
	do {
		a = n%10;
		n = n / 10;
		toplam += a;
		hane++;
		
		
	}
	while (n>0);
	printf("Hane sayisi: %d, rakamlari toplami: %d", hane, toplam);
	
	
	
	
	
	
	return 0;
}
