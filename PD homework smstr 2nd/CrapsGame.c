#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int a, b, c = 0, d = 0;

    printf("Zar at\n");

    getchar();

    a = rand() % 6 + 1;

    b = rand() % 6 + 1;

    printf("%d %d\n", a, b);
    c = a + b;
    while (1)
    {
        if (c == 7 || c == 11)
        {
            printf("Kazandın\n");
            d += c;
            break;
        }
        else if (c == 2 || c == 3 || c == 12){
            printf("Oyun bitti\n");
            d += c;
            break;
        }
        else{
            d += c;
        }
        while (c != 7){

            printf("Zar at\n");

            getchar();

            a = rand() % 6 + 1;
            b = rand() % 6 + 1;
            
            printf("%d %d\n", a, b);
            c = a + b;
            d += c;
        }
        printf("Kazandın\n");
        break;
    }
    printf("PUAN = %d\n", d);

    return 0;
}