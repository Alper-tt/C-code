#include<stdio.h>
int main(){

int no,vize, final;
float ort;

printf("no giriniz:");
scanf("%d", &no);
printf("Vize notu giriniz:");
scanf("%d", &vize);
printf("Final notu giriniz:");
scanf("%d", &final);

ort = vize*4/10.0 + final*6/10.0;

printf("No : %d\nOrtalamanz : %f",no, ort); 

return 0;
}
