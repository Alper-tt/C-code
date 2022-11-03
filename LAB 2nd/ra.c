#include <stdio.h>
#include <string.h>

struct student
{
    int no;
    char name[10];
};

int main()
{
    FILE *ptr;

    if ((ptr = fopen("person", "a+")) == NULL)
    {
        printf("not opened");
    }
    else
    {
        struct student person;

        strcpy(person.name, "a");
        person.no = 1;
        
        fwrite(&person, sizeof(struct student), 1, ptr);

        fread(&person, sizeof(struct student), 1, ptr);

        while (!feof(ptr))
        {
            fread(&person, sizeof(struct student), 1, ptr);
            printf("%d %s", person.no, person.name);

        }
    };

    fclose(ptr);
}