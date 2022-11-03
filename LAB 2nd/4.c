#include <stdio.h>
#include <string.h>

void createStudentFile(FILE *ptr);
void addNewRecord(FILE *ptr);
void printStudents(FILE *ptr);
void findByNO(FILE *ptr);
// void updateRecord(FILE *ptr);

struct Student
{
    char name[20], department[20];
    int no;
} p[10];

int main()
{
    int loop = 1, key;
    FILE *mfPtr;
    while (loop)
    {
        printf("\n1 - Create Student File\n2 - List whole file content \n");
        printf("3 - List single line according to name\n4 - Add new record at the end\n5-Find by no\n");
        // printf("5 - Update a record\n");
        scanf("%d", &key);
        switch (key)
        {
        case 1:
            createStudentFile(mfPtr);
            break;
        case 2:
            printStudents(mfPtr);
            break;
        case 3:
            findByNO(mfPtr);
            break;
        case 4:
            addNewRecord(mfPtr);
            break;
        default:
            loop = 0;
            break;
        }
    }

    return 0;
}

void createStudentFile(FILE *ptr)
{
    char name[30], department[50];
    int no, n;
    if ((ptr = fopen("students", "w")) == NULL)
    {
        printf("File could not be opened\n");
    }
    else
    {
        printf("How many records you would like to insert ? \n");
        scanf("%d", &n);
        printf("Enter the no, name, and departmant.\n");

        for (int i = 0; i < n; i++)
        {
            scanf("%d%29s%s", &no, name, department);
            fprintf(ptr, "%d %s %s\n", no, name, department);
        }

        fclose(ptr);
    }
}

void printStudents(FILE *ptr)
{
    struct Student Student;
    char name[30], department[50];
    int no;
    if ((ptr = fopen("students", "r")) == NULL)
    {
        printf("File could not be opened\n");
    }
    else
    {
        printf("\n%-10s%-13s%s\n", "No", "Name", "Departmant");
        fread(&Student, sizeof(struct Student), 1, ptr);

        while (!feof(ptr))
        {
            printf("%d %s %s", Student.no, Student.name, Student.department);
            fread(&Student, sizeof(struct Student), 1, ptr);
        }
        fclose(ptr);
    }
}

void findByNO(FILE *ptr)
{
    struct Student Student;
        int no;
        if ((ptr = fopen("students", "r")) == NULL)
        {
            printf("File could not be opened\n");
        }
        else
        {
            printf("Enter a no");
            scanf("%d", &no);
            printf("\n%-10s%-13s%s\n", "No", "Name", "Departmant");
            fread(&Student, sizeof(struct Student), 1, ptr);

            while (!feof(ptr))
            {
                if (Student.no==no)
                {
                    printf("%d %s %s", Student.no, Student.name, Student.department);
                }
                
                fread(&Student, sizeof(struct Student), 1, ptr);
            }
            fclose(ptr);
        }
}

void addNewRecord(FILE *ptr)
{
    int n;
    if ((ptr = fopen("students", "a+")) == NULL)
    {
        printf("File could not be opened\n");
    }
    else
    {
        printf("How many new records you would like to insert ? \n");
        scanf("%d", &n);
        printf("Enter the no, name, and departmant.\n");

        for (int i = 0; i < n; i++)
        {
            struct Student p[i];
            scanf("%d%29s%s", &p[i].no, p[i].name, p[i].department);
            fwrite(&p[i], sizeof(struct Student), 1, ptr);
        }
        fclose(ptr);
    }
}
