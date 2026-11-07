#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int roll, marks;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    fp = fopen("students.txt", "w");

    if(fp == NULL)
    {
        printf("File could not be created.");
        return 1;
    }

    for(i = 0; i < n; i++)
    {
        printf("Enter name: ");
        scanf("%s", name);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%d", &marks);

        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    if(fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    while(fscanf(fp, "%s %d %d", name, &roll, &marks) == 3)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               name, roll, marks);
    }

    fclose(fp);

    return 0;
}
