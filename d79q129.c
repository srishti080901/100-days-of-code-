#include <stdio.h>

int main()
{
    FILE *fp;
    int num;
    int sum = 0, count = 0;
    float average;

    fp = fopen("numbers.txt", "r");

    if(fp == NULL)
    {
        printf("File does not exist.");
        return 1;
    }

    while(fscanf(fp, "%d", &num) == 1)
    {
        sum = sum + num;
        count++;
    }

    fclose(fp);

    if(count > 0)
    {
        average = (float)sum / count;

        printf("Sum = %d\n", sum);
        printf("Average = %.2f", average);
    }

    return 0;
}
