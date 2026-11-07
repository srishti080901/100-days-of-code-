#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *input, *output;
    char ch;

    input = fopen("input.txt", "r");

    if(input == NULL)
    {
        printf("Input file does not exist.");
        return 1;
    }

    output = fopen("output.txt", "w");

    if(output == NULL)
    {
        printf("Output file could not be created.");
        fclose(input);
        return 1;
    }

    while((ch = fgetc(input)) != EOF)
    {
        ch = toupper(ch);
        fputc(ch, output);
    }

    fclose(input);
    fclose(output);

    printf("File converted successfully.");

    return 0;
}
