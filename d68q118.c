#include <stdio.h>

int main()
{
    int n, i;
    int actualSum = 0, expectedSum, missing;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        actualSum = actualSum + nums[i];
    }

    expectedSum = n * (n + 1) / 2;

    missing = expectedSum - actualSum;

    printf("%d", missing);

    return 0;
}
