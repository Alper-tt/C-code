#include<stdio.h>
#include<stdlib.h>

int main(){

    int menu,para=10000,c_para,y_para,i,g_para,acc_no,sifre=0000,o_sifre=0000,y_sifre,a;
    
    system("color 9");
    printf("\t\t\t\t\tBANKAMIZA HOSGELDINIZ\n");
    
    printf("DEMO HESABIDIR\nHesap sifresi: 0000 | Hesaptaki tutar: 10000\n\n");
    
    for(a=0;a<1;){
    	printf("\n\n1-Para cekme\n");
    	printf("2-Para yatirma\n");
    	printf("3-Para gonderme\n");
    	printf("4-Sifre islemleri\n");
    	printf("5-Kart iade\n");
    	printf("\n\nYapmak istediginiz islemi giriniz	(Cikis icin 0): ");
		scanf("%d", &menu);
		system("cls");
		
		if(menu==0){
			printf("\nCikis yapiliyor!!!");
			a=1;
		}
		
		switch(menu){
    		case 1:
				printf("Hesabinizdaki tutar: %d TL\n",para);
				printf("Cekmek istediginiz tutari girin: ");
				scanf("%d", &c_para);
	
				for(i=0;i<1;){
					if(c_para>para){
						printf("Islem gerceklestirilemedi, Tekrar deneyiniz!\n");
						printf("Cekmek istediginiz tutari girin: ");
						scanf("%d", &c_para);
					}
					else{
						printf("\nIslem basariyla gerceklestirildi...\n\n");
						para-=c_para;
						printf("Cekilen tutar: %d\nKalan tutar: %d",c_para,para);
						i=1;
					}
				}
				break;
    		case 2:
        		printf("Hesabinizdaki tutar: %d TL\n",para);
				printf("Yatirmak istediginiz tutari girin:");
				scanf("%d", &y_para);
			
				printf("\nIslem basariyla gerceklestirildi...\n\n");
				para+=y_para;
				printf("Yatirilan tutar: %d\nHesaptaki toplam tutar: %d",y_para,para);
            	break;
  	        case 3:
    	    	printf("Hesabinizdaki tutar: %d TL\n",para);
				printf("Gondermek istediginiz tutari girin:");
				scanf("%d", &g_para);
				printf("Gondermek istediginiz hesap numarasini girin:");
				scanf("%d", &acc_no);
			
				for(i=0;i<1;){
					if(g_para>para){
					printf("Islem gerceklestirilemedi, Tekrar deneyiniz!\n");
					printf("Gondermek istediginiz tutari girin: ");
					scanf("%d", &g_para);
					}
					else{
						printf("\nIslem basariyla gerceklestirildi...\n\n");
						para-=g_para;
						printf("Gonderilen tutar: %d\nKalan tutar: %d",g_para,para);
						i=1;
					}
				}
				break;
			case 4:
				printf("Onceki sifrenizi giriniz: ");
				scanf("%d", &o_sifre);
			
				for(i=0;i<1;){
					if(o_sifre==sifre){
						printf("Yeni sifrenizi girin: ");
						scanf("%d", &sifre);
						o_sifre = sifre;
						printf("Islem basariyla gerceklestirildi!");
						i=1;
					}
					else{
						printf("Onceki sifreniz yanlis!\nTekrar deneyiniz: ");
						scanf("%d", &o_sifre);
					} 
				}
				break;
			case 5:
				printf("Kartiniz iade edilmistir.\nLutfen kartinizi aliniz!..");
				a=1;
				break;
		}
	}




    return 0;
}
