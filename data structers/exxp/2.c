#include <stdio.h>
#include <stdlib.h>

int tepe = 0;
int boyut = 2;
int *dizi;

int pop()
{
    if (tepe <= boyut / 4)
    {
        int *dizi2 = (int *)malloc(sizeof(int) * boyut / 2);
        for (int i = 0; i < boyut; i++)
        {
            dizi2[i] = dizi[i];
        }
        free(dizi);
        dizi = dizi2;
        boyut /= 2;
    }
    return dizi[tepe--];
}

int push(int a)
{
    if (tepe >= boyut)
    {
        int *dizi2 = (int *)malloc(sizeof(int) * boyut * 2);
        for (int i = 0; i < boyut; i++)
        {
            dizi2[i] = dizi[i];
        }
        free(dizi);
        dizi = dizi2;
        boyut *= 2;
    }
    return dizi[tepe++] = a;
}

void bastir()
{
    for (int i = 0; i < tepe; i++)
    {
        printf("%d ", dizi[i]);
    }
    printf("//boyut : %d //", boyut);
}

int main()
{
    dizi = (int *)malloc(sizeof(int) * 2);
    push(10);
    push(20);
    push(30);
    pop();
    bastir();
}