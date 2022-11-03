#include <stdio.h>
#include <string.h>

struct patient
{
    int no;
    char name[20];
    int age;
    char disease[20];
};

void createFile(FILE *ptr);
void addPatient(FILE *ptr);
void findByNo(FILE *ptr);
void deleteRecord(FILE *ptr);
void editRecord(FILE *ptr);
void printRecords(FILE *ptr);

int main()
{
    int s, l = 1;
    FILE *mfptr;

    while (l)
    {
        printf("\n\n1-Create a new file\n2-Insert a new patient\n3-Find patient by number\n4-Delete a patient record\n5-Modify a patient record\n6-List all patients information\n\n");
        scanf("%d", &s);

        switch (s)
        {
        case 1:
            createFile(mfptr);
            break;
        case 2:
            addPatient(mfptr);
            break;
        case 3:
            findByNo(mfptr);
            break;
        case 4:
            deleteRecord(mfptr);
            break;
        case 5:
            editRecord(mfptr);
            break;
        case 6:
            printRecords(mfptr);
            break;
        default:
            l = 0;
            break;
        }
    }
}

void createFile(FILE *ptr)
{

    int i;
    struct patient emptyPatient = {0, "", 0, ""};
    if ((ptr = fopen("patients", "w")) == NULL)
    {
        printf("File not created!!!");
    }
    else
    {
        for (i = 0; i < 100; i++)
        {
            fwrite(&emptyPatient, sizeof(struct patient), 1, ptr);
        }
        fclose(ptr);
    }
}

void addPatient(FILE *ptr)
{
    struct patient patient;
    int n;
    if ((ptr = fopen("patients", "a+")) == NULL)
    {
        printf("File could not open");
    }
    else
    {
        printf("How many records you would like to insert ? \n");
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            printf("Enter the no, name age and disease in order\n");
            scanf("%d%s%d%s", &patient.no, patient.name, &patient.age, patient.disease);
            fwrite(&patient, sizeof(struct patient), 1, ptr);
        }
        fclose(ptr);
    }
}

void findByNo(FILE *ptr)
{
    int counter = 1;
    int no;
    struct patient patient = {0, "", 0, ""};
    if ((ptr = fopen("patients", "r")) == NULL)
    {
        printf("file could not open");
    }
    else
    {
        printf("Enter patient no: ");
        scanf("%d", &no);
        printf("\n%-4s%-12s%-8s%s\n", "NO", "Name", "Age", "Disease");
        fread(&patient, sizeof(struct patient), 1, ptr);
        while (!feof(ptr))
        {
            if (patient.no == no)
            {
                printf("%-4d%-12s%-8d%s\n", patient.no, patient.name, patient.age, patient.disease);
            }
            fread(&patient, sizeof(struct patient), 1, ptr);
        }
        fclose(ptr);
    }
}

void deleteRecord(FILE *ptr){
    int id;
    struct patient patient = {0,"",0,""};
    if ((ptr = fopen("patients","r+")) == NULL)
    {
        printf("File could not be opened\n");
    }else
    {
        printf("Patient id = ");
        scanf("%d",&id);

        fseek(ptr,(id-1)*sizeof(patient),SEEK_SET);
        fwrite(&patient, sizeof(patient),1,ptr);

        fclose(ptr);
    }
}

void editRecord(FILE *ptr)
{
    int no;
    struct patient patient = {0, "", 0, ""};
    if ((ptr = fopen("patients", "r+")) == NULL)
    {
        printf("File could not open");
    }
    else
    {
        printf("Enter disease number that you wanna edit = ");
        scanf("%d", &no);
        
        fseek(ptr, (no - 1) * sizeof(struct patient), SEEK_SET);
        fread(&patient, sizeof(struct patient), 1, ptr);
        fseek(ptr, (no - 1) * sizeof(struct patient), SEEK_SET);
        printf("Enter the no, name age and disease in order\n");
        scanf("%d%s%d%s", &patient.no, patient.name, &patient.age, patient.disease);
        fwrite(&patient, sizeof(struct patient), 1, ptr);
        fclose(ptr);
    }
}

void printRecords(FILE *ptr)
{
    struct patient patient = {0, "", 0, ""};
    int counter = 1;
    if ((ptr = fopen("patients", "r")) == NULL)
    {
        printf("File could not opened!!!");
    }
    else
    {
        printf("\n%-4s%-12s%-8s%s\n", "NO", "Name", "Age", "Disease");
        fread(&patient, sizeof(struct patient), 1, ptr);
        while (!feof(ptr))
        {
            if (strcmp(patient.name, "") != 0)
            {
                printf("%-4d%-12s%-8d%s\n", patient.no, patient.name, patient.age, patient.disease);
            }
            fread(&patient, sizeof(struct patient), 1, ptr);
            counter++;
        }
        fclose(ptr);
    }
}
