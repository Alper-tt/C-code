#include <stdio.h>    
struct Person
{
	int number;
	int midtermGrade;
    char name[20];
    char surname[20];
}p[10];
int main() {
	struct Person p[10];

    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter %d. student number: \n",i+1);
        scanf("%d", &p[i].number);
        printf("\nEnter %d. midterm grade: \n",i+1);
        scanf("%d", &p[i].midtermGrade);
        printf("\nEnter %d. name: \n",i+1);
        gets(p[i].name);

        gets(p[i].name);
        printf("\nEnter %d. surname: \n",i+1);
        gets(p[i].surname);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\n%d. student name: %s\n",i+1,p[i].name);
        printf("%d. student surname: %s\n",i+1,p[i].surname);
        printf("%d. student number: %d\n",i+1,p[i].number);
        printf("%d. student midterm grade: %d\n",i+1,p[i].midtermGrade);
        printf("**************\n");

        
    }
    



	return 0;
}