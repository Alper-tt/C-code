#include<stdio.h>
int main() {

int islem;
int bakiye = 1000;
int tutar;

printf("Islemler\n1:para cekme\n2:para yatirma\n3:Havale yapma\n4:Bakiye sorgulama\n5:Kart iade\n\n\n");

printf("İslem seciniz:");
scanf("%d", &islem);


switch (islem){
	
	case 1:
		printf("Bakiyeniz : %d\n", bakiye);
		printf("Cekilecek tutar : ");
		scanf("%d", &tutar);
		if (tutar>bakiye) {
			printf("Bakiye yetersiz\n");
			
		}
		else {
		bakiye-=tutar;
		printf("Bakiyeniz : %d", bakiye);
	}
		break;
	
	
	case 2:
		printf("Bakiyeniz : %d\n", bakiye);
		printf("yatirilacak tutar : ");
		scanf("%d", &tutar);
		bakiye+=tutar;
		printf("Bakiyeniz : %d", bakiye);
		break;
	
	case 3:
		printf("Bakiyeniz : %d\n", bakiye);
		printf("Havale edilecek tutar : ");
		scanf("%d", &tutar);
		if (tutar>bakiye) {
			printf("Bakiye yetersiz\n");
		break;
			
		}
		else {
		bakiye-=tutar;
		printf("Bakiyeniz : %d", bakiye);
	}
		break;
	
	case 4:
		printf("Bakiyeniz : %d\n", bakiye);
		break;
		
	case 5:
		printf("Kart iade edildi\n");
		break;
		
	default:
		printf("Bilinmeyen islem");
		break;



return 0;
	}


}
