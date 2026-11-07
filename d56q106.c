#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        int nextGreater = -1;

        for(j = i + 1; j < n; j++)
        {
            if(arr[j] > arr[i])
            {
                nextGreater = arr[j];
                break;
            }
        }

        printf("%d", nextGreater);

        if(i < n - 1)
        {
            printf(", ");
        }
    }

    return 0;
}
