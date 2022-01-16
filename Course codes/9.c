#include<stdio.h>
int main() {
	int vize1,vize2,final;
	float dersort,ortalama;
	
	printf("1. vize:");
	scanf("%d", &vize1);
	printf("2. vize:");
	scanf("%d", &vize2);
	printf("Final:");
	scanf("%d", &final);
	printf("ortalama:");
	scanf("%f", &ortalama);
	
	dersort = (vize1+vize2+final)/3.0;
	
	if(dersort>=90) {
		printf("Harf notunuz - AA ve ders ortalamaniz: %.2f", dersort);
	}
	else if (dersort >= 85 && dersort <= 90) {
		printf("Harf notunuz - BA ve ders ortalamaniz: %.2f", dersort);
	}
	else if (dersort >= 80 && dersort <= 85) {
		printf("Harf notunuz - BB ve ders ortalamaniz: %.2f", dersort);
	}
		else if (dersort >= 75 && dersort <= 80) {
		printf("Harf notunuz - BC ve ders ortalamaniz: %.2f", dersort);
	}
		else if (dersort >= 70 && dersort <= 75) {
		printf("Harf notunuz - CC ve ders ortalamaniz: %.2f", dersort);
			if(ortalama < 2.5) {
				printf("\nDersi tekrar alman yararli olur cunku ortalaman dusuk.");
			}
	}
		else if (dersort >= 65 && dersort <= 70) {
		printf("Harf notunuz - DC ders ortalamaniz: %.2f", dersort);
			if(ortalama < 2.5) {
				printf("\nDersi tekrar alman yararli olur cunku ortalaman dusuk.");
			}
	}
		else if (dersort >= 60 && dersort <= 65) {
		printf("Harf notunuz - DD ve ders ortalamaniz: %.2f", dersort);
			if(ortalama < 2.5) {
				printf("\nDersi tekrar alman yararli olur cunku ortalaman dusuk.");
			}
	}
	else{
		printf("Harf notunuz - FF ve ders ortalamaniz : %.2f\n", dersort);
		printf("Dersten kaldin...");
	}
	
	return 0;
}

