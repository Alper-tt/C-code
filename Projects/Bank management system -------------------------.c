#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int i,j;
int ana_cikis;
void menu();
struct tarih{
    int gun,ay,yil;

    };
struct {

    char isim[30];
    int hesap_no,yas;
    float miktar;
    struct tarih dg;
    struct tarih yatirilan;
    struct tarih cekilen;

    }ekle,guncelle,kontrol,sil,islem;


void beklet(int j)
{   int i,k;
    for(i=0;i<j;i++)
         k=i;
}

void new_acc(){
    int choice;
    FILE *ptr;

    ptr=fopen("record.dat","a+");
    hesap_num:
    system("cls");
    printf("\t\t\t ADD RECORD  ");
    printf("\n\n\nEnter today's date(mm/dd/yyyy):");
    scanf("%d/%d/%d",&ekle.yatirilan.gun,&ekle.yatirilan.ay,&ekle.yatirilan.yil);
    printf("\nEnter the account number:");
    scanf("%d",&kontrol.hesap_no);
    while(fscanf(ptr,"%d %s %d/%d/%d %d %f %d/%d/%d\n",&ekle.hesap_no,ekle.isim,&ekle.dg.gun,&ekle.dg.ay,&ekle.dg.yil,&ekle.yas,&ekle.miktar,&ekle.yatirilan.gun,&ekle.yatirilan.ay,&ekle.yatirilan.yil)!=EOF)
    {
        if (kontrol.hesap_no==ekle.hesap_no)
            {printf("Account no. already in use!");
            beklet(1000000000);
                goto hesap_num;

            }
    }
    ekle.hesap_no=kontrol.hesap_no;
    printf("\nEnter the name:");
    scanf("%s",ekle.isim);
    printf("\nEnter the date of birth(mm/dd/yyyy):");
    scanf("%d/%d/%d",&ekle.dg.gun,&ekle.dg.ay,&ekle.dg.yil);
    printf("\nEnter the age:");
    scanf("%d",&ekle.yas);
    printf("\nEnter the amount to deposit:$");
    scanf("%f",&ekle.miktar);

        fprintf(ptr,"%d %s %d/%d/%d %d %f %d/%d/%d\n",ekle.hesap_no,ekle.isim,ekle.dg.gun,ekle.dg.ay,ekle.dg.yil,ekle.yas,ekle.miktar,ekle.yatirilan.gun,ekle.yatirilan.ay,ekle.yatirilan.yil);


    fclose(ptr);
    printf("\nAccount created successfully!");
    add_invalid:
    printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d",&ana_cikis);
    system("cls");
    if (ana_cikis==1)
        menu();
    else if(ana_cikis==0)
            close();
    else
        {
            printf("\nInvalid!\a");
            goto add_invalid;
        }
}

void listeyi_gor(){
	
    FILE *gor;
    gor=fopen("record.dat","r");
    int test=0;
    system("cls");
    printf("\nHESAP NO.\tISIMM\t\t\tYAS\n");

    while(fscanf(gor,"%d %f %d/%d/%d %s %d %d/%d/%d",&ekle.hesap_no,&ekle.miktar,&ekle.dg.gun,&ekle.dg.ay,&ekle.dg.yil,ekle.isim,&ekle.yas,&ekle.yatirilan.gun,&ekle.yatirilan.ay,&ekle.yatirilan.yil)!=EOF){
        
		printf("\n%6d\t %10s\t\t\t%d",ekle.hesap_no,ekle.isim,ekle.yas);
        test++;
    }
    
    fclose(gor);
    if (test==0)
        {   system("cls");
            printf("\nKAYIT YOK!!\n");}

    listeyi_gor_gecersiz:
     printf("\n\nAna menu icin 1 | Cikis icin 0 tuslayin:");
        scanf("%d",&ana_cikis);
        system("cls");
        if (ana_cikis==1)
            menu();
        else if(ana_cikis==0)
            close();
        else{
        	printf("\nGecersiz deger!");
            goto listeyi_gor_gecersiz;
        }
}

void duzenle(void){
	
    int choice,test=0;
    FILE *eski,*yenikayit;
    eski=fopen("record.dat","r");
    yenikayit=fopen("new.dat","w");
	
	system("cls");
    printf("\nBilgisini degistirmek istediginiz kisinin hesap numarasini giriniz:");
    scanf("%d",&guncelle.hesap_no);
    while(fscanf(eski,"%d %s %d/%d/%d %d %f %d/%d/%d\n",&ekle.hesap_no,ekle.isim,&ekle.dg.gun,&ekle.dg.ay,&ekle.dg.yil,&ekle.yas,&ekle.miktar,&ekle.yatirilan.gun,&ekle.yatirilan.ay,&ekle.yatirilan.yil)!=EOF){

		if (ekle.hesap_no==guncelle.hesap_no){
			test=1;
            printf("\nHangi bilgiyi degistirmek istiyorsunuz?\n1.Hesap Numarasi\n2.Isim\n3.Yas\n4.Menu\n\nSeciminizi girin: ");
            scanf("%d",&choice);
            system("cls");
            if(choice==1){
				printf("Yeni hesap numarasini giriniz:");
                scanf("%d",&guncelle.hesap_no);
                fprintf(yenikayit,"%d %d/%d/%d %s %d %d/%d/%d %f\n",ekle.hesap_no,ekle.dg.gun,ekle.dg.ay,ekle.dg.yil,ekle.isim,ekle.yas,ekle.yatirilan.gun,ekle.yatirilan.ay,ekle.yatirilan.yil,ekle.miktar);
				system("cls");
                printf("Degisiklikler kaydedildi!");
            }
            else if(choice==2){
                printf("Yeni isimi giriniz:");
                scanf("%s",&guncelle.isim);
                fprintf(yenikayit,"%d %d/%d/%d %s %d %d/%d/%d %f\n",ekle.hesap_no,ekle.dg.gun,ekle.dg.ay,ekle.dg.yil,ekle.isim,ekle.yas,ekle.yatirilan.gun,ekle.yatirilan.ay,ekle.yatirilan.yil,ekle.miktar);
				system("cls");
                printf("Degisiklikler kaydedildi!");
			}
            else if(choice==3){
            	printf("Yeni yasi giriniz:");
            	scanf("%d", &guncelle.yas);
            	fprintf(yenikayit,"%d %d/%d/%d %s %d %d/%d/%d %f\n",ekle.hesap_no,ekle.dg.gun,ekle.dg.ay,ekle.dg.yil,ekle.isim,ekle.yas,ekle.yatirilan.gun,ekle.yatirilan.ay,ekle.yatirilan.yil,ekle.miktar);
				system("cls");
				printf("Degisiklikler kaydedildi!");
			}
			else if(choice==4){
				menu();
			}
			else{
				printf("Gecersiz secim! Tekrar deneyiniz.");
				beklet(10000000);
				menu();
			}
		}
		
		else{
			fprintf(yenikayit,"%d %d/%d/%d %s %d %d/%d/%d %f\n",ekle.hesap_no,ekle.dg.gun,ekle.dg.ay,ekle.dg.yil,ekle.isim,ekle.yas,ekle.yatirilan.gun,ekle.yatirilan.ay,ekle.yatirilan.yil,ekle.miktar);
		}	
	}		
	fclose(eski);
	fclose(yenikayit);
	remove("record.dat");
	rename("new.dat", "record.dat");
			
	if (test!=1){
		system("cls");
		printf("\n\nKAYIT BULUNAMADI!");
		duzenleme_gecersiz:
			printf("\n\nCikis icin 0 | Ana menu icin 1 | Tekrar denemek icin 2 tuslayin:");
   			scanf("%d",&ana_cikis);
    	   	system("cls");
   	   		if (ana_cikis==1)
   		  		menu();
    		else if(ana_cikis==0)
        		close();
        	else if(ana_cikis==2){
        		duzenle();
			}
			else
        		printf("\nGecersiz deger!");
        		beklet(10000000);
           		goto duzenleme_gecersiz;
	}
    else{
    	printf("\n\nAna menu icin 1 | Cikis icin 0 tuslay�n:");
        scanf("%d",&ana_cikis);
        system("cls");
        if (ana_cikis==1)
            menu();
        else if(ana_cikis==0)
            close();
        else{
        	menu();
		}
    	
	}
}

void islemler(void){
	int choice, test=0;
	FILE *eski,*yenikayit;
	eski=fopen("record.dat", "r");
	yenikayit=fopen("new.dat", "w");
	
	system("cls");	
	printf("Musteri hesap numarasi giriniz: ");
	scanf("%d", &islem.hesap_no);
	while(fscanf(eski,"%d %s %d/%d/%d %d %f %d/%d/%d\n",&ekle.hesap_no,ekle.isim,&ekle.dg.gun,&ekle.dg.ay,&ekle.dg.yil,&ekle.yas,&ekle.miktar,&ekle.yatirilan.gun,&ekle.yatirilan.ay,&ekle.yatirilan.yil)!=EOF){
		
		if(ekle.hesap_no==islem.hesap_no){
			test=1;
			printf("\n1.Yatirma\n2.Cekme\nHangi islemi yapmak istiyorsunuz: ");
			scanf("%d", &choice);
			if(choice==1){
				printf("Ne kadar yatirmak istediginizi girin: ");
				scanf("%f",&islem.yatirilan);
				ekle.miktar+=islem.miktar;
				fprintf(yenikayit,"%d %d/%d/%d %s %d %d/%d/%d %f\n",ekle.hesap_no,ekle.dg.gun,ekle.dg.ay,ekle.dg.yil,ekle.isim,ekle.yas,ekle.yatirilan.gun,ekle.yatirilan.ay,ekle.yatirilan.yil,ekle.miktar);
				printf("\nBasariyla yatirildi!");
			}
			else if(choice==2){
				printf("Ne kadar cekmek istedihinizi girin: ");
				scanf("%f", &islem.yatirilan);
				ekle.miktar-=islem.miktar;
				fprintf(yenikayit,"%d %d/%d/%d %s %d %d/%d/%d %f\n",ekle.hesap_no,ekle.dg.gun,ekle.dg.ay,ekle.dg.yil,ekle.isim,ekle.yas,ekle.yatirilan.gun,ekle.yatirilan.ay,ekle.yatirilan.yil,ekle.miktar);
				printf("\nBasariyla cekildi!");
			}
			else{
				printf("\nGecersiz deger!");
				beklet(1000000000);
				menu();
			}
		}
		else{
			fprintf(yenikayit,"%d %d/%d/%d %s %d %d/%d/%d %f\n",ekle.hesap_no,ekle.dg.gun,ekle.dg.ay,ekle.dg.yil,ekle.isim,ekle.yas,ekle.yatirilan.gun,ekle.yatirilan.ay,ekle.yatirilan.yil,ekle.miktar);
		}
		
		
	}
	fclose(eski);
	fclose(yenikayit);
	remove("record.dat");
	rename("new.dat", "record.dat");
	
		if(test!=1){
			printf("\nKayit bulunamadi!");
			islem_gecersiz:
				printf("\n\nTekrar denemek icin 0 | Menuye donmek icin 1 | Cikis icin 2 tuslayin.");
				scanf("%d", &ana_cikis);
				if(ana_cikis==0){
					islemler();
				}
				else if(ana_cikis==1){
					menu();
				}
				else if(ana_cikis==2){
					close();
				}
				else{
					printf("\nGecersiz deger!");
					goto islem_gecersiz;
				}
		}
		else{
			printf("\nCikis icin 0 | Ana menu icin 1 tuslayin:");
			scanf("%d", &ana_cikis);
			if(ana_cikis==1){
				menu();
			}
			else{
				close();
			}
		}		
}

void silmek(void){
	FILE *eski, *yenikayit;
	int test=0;
	eski=fopen("record.dat", "r");
	yenikayit=fopen("new.dat", "w");
	system("cls");
	printf("Islem yapmak istediginiz kisinin hesap numarasini giriniz: ");
	scanf("%d", &sil.hesap_no);
	while(fscanf(eski,"%d %s %d/%d/%d %d %f %d/%d/%d\n",&ekle.hesap_no,ekle.isim,&ekle.dg.gun,&ekle.dg.ay,&ekle.dg.yil,&ekle.yas,&ekle.miktar,&ekle.yatirilan.gun,&ekle.yatirilan.ay,&ekle.yatirilan.yil)!=EOF){
	
		if(ekle.hesap_no!=sil.hesap_no){
			fprintf(yenikayit,"%d %d/%d/%d %s %d %d/%d/%d %f\n",ekle.hesap_no,ekle.dg.gun,ekle.dg.ay,ekle.dg.yil,ekle.isim,ekle.yas,ekle.yatirilan.gun,ekle.yatirilan.ay,ekle.yatirilan.yil,ekle.miktar);
		}
		else {
			printf("\nHesap basariyla silindi!");
			test=1;	
		}
	fclose(eski);
	fclose(yenikayit);
	remove("record.dat");
	rename("new.dat", "record.dat");
	
	if (test=0){
		printf("\nKayit bulunamadi!");
		sil_gecersiz:
			printf("\nTekrar denemek icin 0 | Ana menu icin 1 | cikis icin 2 tuslayin: ");
			scanf("%d", &ana_cikis);
			
			if(ana_cikis==0)
				silmek();
			else if(ana_cikis==1)
				menu();
			else if (ana_cikis==2)
				close();
			else{
				printf("\nGecersiz deger!");
				goto sil_gecersiz;
			}		
	}
	else{
		printf("\nCikis icin 0 | Ana menu icin 1 tuslayin:");
		scanf("%d", &ana_cikis);
		if(ana_cikis==1)
			menu();
		else{
			close();
		}
	}
	
	}
}

void bak(){
	FILE *ptr;
	int test=0;
	float time;
	ptr=fopen("record.dat", "r");
	system("cls");
	printf("Bilgilerini gormek istediginiz kisinin hesap numarasini giriniz: ");
	scanf("%d", &kontrol.hesap_no);
	while(fscanf(ptr,"%d %s %d/%d/%d %d %f %d/%d/%d\n",&ekle.hesap_no,ekle.isim,&ekle.dg.gun,&ekle.dg.ay,&ekle.dg.yil,&ekle.yas,&ekle.miktar,&ekle.yatirilan.gun,&ekle.yatirilan.ay,&ekle.yatirilan.yil)!=EOF){
		if(ekle.hesap_no==kontrol.hesap_no){
			system("cls");
			test=1;
			printf("\nHesap numarasi: %d\nIsim: %s\nDogum Gunu(gg/aa/yyyy): %d/%d/%d\nYatirilan miktar(TL): %d\nYatirilan tarih(gg/aa/yyyy): %d/%d/%d\n",ekle.hesap_no, ekle.isim, ekle.yas,
			ekle.dg.gun, ekle.dg.ay, ekle.dg.yil, ekle.miktar,ekle.yatirilan.gun,ekle.yatirilan.ay,ekle.yatirilan.yil);
		}
		break;
	}
	fclose(ptr);
	if(test!=1){
		system("cls");
		printf("\n\nKayit bulunamadi!\n");
		bak_gecersiz:
			printf("Tekrar denemek icin 0 | Ana menu icin 1 | Cikis icin 2 tuslayin:");
			scanf("%d", &ana_cikis);
			if(ana_cikis=0)
				bak();
			else if(ana_cikis==1)
				menu();
			else if(ana_cikis==2)
				close();
			else{
				printf("\n\nGecersiz deger!");
				goto bak_gecersiz;
			}
	}
	else{
		printf("\nCikis icin 0 | Ana menu icin 1 tuslayin:");
		scanf("%d", &ana_cikis);
		if(ana_cikis==1)
			menu();
		else{
			system("cls");
			close();
		}
	}
	
}

void kapat(void){
	printf("\n\nBu sistem DreadH tarafindan kodlanmistir!");
}

void menu(void){
	int choice;
	system("cls");
	system("color 01");
	printf("\n\n\t\tKULLANICI BANKA YONETIM SISTEMI");
	printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ANA MENUYE HOSGELDINIZ\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	printf("\n\n\t\t1.Yeni hesap olustur\n\t\t2.Hesap bilgisi guncelleme\n\t\t3.Islemler\n\t\t4.Hesap bilgilerini kontrol et\n\t\t5.Hesap silme islemleri\n\t\t6.Musteri listesi\n\t\t7.Cikis");
	printf("\n\n\n\n\n\t\tEnter your choice: ");
	scanf("%d", &choice);
	
	switch(choice){
		case 1: new_acc();
		break;
		case 2: duzenle();
		break;
		case 3: islemler();
		break;
		case 4: bak();
		break;
		case 5: silmek();
		break;
		case 6: listeyi_gor();
		break;
		case 7: kapat();
		break;
	}
	
}

int main(){
	char sifre[10], ana_sifre[10]="alper";
	int i=0;
	
	printf("\n\n\nSifre girin: ");
	scanf("%s",&sifre);
	if(strcmp(sifre,ana_sifre)==0){
		printf("\n\nSifre eslesti! \nYUKLENIYOR...");
		for(i=0;i<6;i++){
			beklet(10000);
			printf("*");
			
		}
		beklet(100000);
		beklet(1000000000);
	system("cls");
	menu();
	}
	
	else{
		printf("\n\nYANLIS SIFRE!");
		giris_deneme:
			printf("\n\n\tTekrar denemek icin 0 | Cikis icin 1 tuslayin: ");
			scanf("%d",&ana_cikis);
			if(ana_cikis==1){
				close();
			}
			else if(ana_cikis==0){
				system("cls");
				main();
			}
			else {
				printf("\nGecersiz deger!");
				beklet(1000000000);
				system("cls");
				goto giris_deneme;
			}
	}
	return 0;
	
}
