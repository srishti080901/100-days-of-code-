#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int characters = 0;
    int words = 0;
    int lines = 1;
    int inWord = 0;

    fp = fopen("sample.txt", "r");

    if(fp == NULL)
    {
        printf("File not found.");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if(ch == '\n')
        {
            lines++;
        }

        if(ch == ' ' || ch == '\n')
        {
            inWord = 0;
        }
        else if(inWord == 0)
        {
            words++;
            inWord = 1;
        }
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
