#include <stdio.h>

int main()
{
    int i, arr[5] = {145, 99, 82, 52, 10}, min, minIn;

    for (i = 0; i < 5; i++)
    {
        min = arr[i];
        minIn = i;

        for (int j = i; j < 5; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                minIn = j;
            }
            arr[minIn] = arr[i];
            arr[i] = min;
        }
    }
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
}