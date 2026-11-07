#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, j, k, length, maxLength = 0;
    int repeated;

    printf("Enter string: ");
    scanf("%s", s);

    length = strlen(s);

    for(i = 0; i < length; i++)
    {
        for(j = i; j < length; j++)
        {
            repeated = 0;

            for(k = i; k < j; k++)
            {
                if(s[k] == s[j])
                {
                    repeated = 1;
                    break;
                }
            }

            if(repeated == 1)
            {
                break;
            }

            if(j - i + 1 > maxLength)
            {
                maxLength = j - i + 1;
            }
        }
    }

    printf("%d", maxLength);

    return 0;
}
