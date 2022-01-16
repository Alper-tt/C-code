#include<stdio.h>
int main(){
	
	int vize1, vize2, final;
	float dersort;
	float ortalama;
	
	printf("Birinci vize notunuzu girin:");
	scanf("%d" , &vize1);
	
	printf("Ýkinci vize notunuzu girin:");
	scanf("%d" , &vize2);
	
	printf("Final notunuzu girin:");
	scanf("%d" , &final);
	
	printf("Universite ortalamanizi girin:");
	scanf("%f" , &ortalama);
	
	dersort = ((vize1+vize2+final)/3.0);
	
	if (dersort>60) {
		
		printf("Tebrikler dersi gectiniz...");	
	}
	
	else if (dersort>50) {
		printf("Bute kaldiniz...");
		
		if (ortalama < 2.5){
			printf("\nButten gecseniz dahi dersi gecemezsiniz.\nDersi tekrar aliniz.");
		}
		
		}
		
	else {
	printf("Malesef dersten basarisiz oldunuz...");
	}
	
	return 1;	
	}
