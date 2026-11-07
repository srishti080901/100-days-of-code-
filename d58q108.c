#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    int answer[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for(i = 0; i < n; i++)
    {
        answer[i] = 1;

        for(j = 0; j < n; j++)
        {
            if(i != j)
            {
                answer[i] = answer[i] * nums[j];
            }
        }
    }

    printf("[");

    for(i = 0; i < n; i++)
    {
        printf("%d", answer[i]);

        if(i < n - 1)
        {
            printf(",");
        }
    }

    printf("]");

    return 0;
}
