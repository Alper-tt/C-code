#include<stdio.h>

int main(){

FILE *filep;
char texs[256];
filep = fopen("alper.txt" , "a");

if (filep == NULL) {

    printf("Dosya olusmadi");

}
else {

printf("Birsey yazin : ");
fgets(texs, 256, stdin);
fputs(texs, filep);
printf("ok");
fclose(filep);


}






    return 0;
}
