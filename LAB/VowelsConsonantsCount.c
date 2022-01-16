#include<stdio.h>
#include<string.h>

int main(){
    int i=0,v=0,c=0,d=0,s=0;
    char a[100];
    
    printf("Enter a string: " );
    gets(a);

    for(i=0;a[i]!='\0';i++){

        if(a[i]==' '){
            s=s+1;
        }
        else if(a[i]=='1' || a[i]=='2' || a[i]=='3' || a[i]=='4' || a[i]=='5' || a[i]=='6' || a[i]=='7' || a[i]=='8' || a[i]=='9'){

            d=d+1;
        }
        else if(a[i]=='a' || a[i]=='e' || a[i]=='i' ||
        a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' ||
        a[i]=='O' || a[i]=='U'){
            v=v+1;
        }
        else if(a[i]>='a' && a[i]<='z'){
            c=c+1;
        }
    }

    printf("Vowels: %d\nConsonants: %d\nDigits: %d\nSpaces: %d\n",v,c,d,s);


    return 0;
}