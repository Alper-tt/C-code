#include <stdio.h>

void list(FILE *ptr);
void add(FILE *ptr);

int main()
{
    FILE *ptr;
    int s;

    while (1)
    {
        printf("\n1-add\n2-list\n");
        scanf("%d", &s);

        switch (s)
        {
        case 1:
            add(ptr);
            break;
        case 2:
            list(ptr);
            break;

        default:
            break;
        }
        return 0;
    }
}

void list(FILE *ptr)
{
    int no;
    char name[10];
    ptr = fopen("student.txt", "r");
        fscanf(ptr, "%d %s", &no, name);


    while (!feof(ptr))
    {

        printf("\nno: %d, name: %s\n", no, name);
        fscanf(ptr, "%d %s", &no, name);

    }

    fclose(ptr);
}

void add(FILE *ptr)
{

    int no;
    char name[10];

    printf("Enter the no and name\n");
    scanf("%d %s\n",&no,name);

    ptr = fopen("student.txt","a+");

    fprintf(ptr,"%d %s\n",no,name);

    fclose(ptr);
    
}