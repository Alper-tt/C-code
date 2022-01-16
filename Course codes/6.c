#include<stdio.h>

//bool veri tipi T & F

int main() {
	
	int note;
	printf("Notunuzu girin:");
	scanf("%d", &note);
	
	if (note >= 60){
		
		printf("Dersten gectiniz. Tebrikler... :)");
		
	}
	
	else{
		printf("Dersten kaldiniz..!, gecmeniz icin +%d puan gerekiyor...", 60-note);
	}
	
	
	return 0;
}
