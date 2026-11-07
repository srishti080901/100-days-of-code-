#include <stdio.h>

int main()
{
    int m, n, i, j, k;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    int nums1[m];

    printf("Enter first array elements: ");
    for(i = 0; i < m; i++)
    {
        scanf("%d", &nums1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    int nums2[n];
    int merged[m + n];

    printf("Enter second array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums2[i]);
    }

    i = 0;
    j = 0;
    k = 0;

    while(i < m && j < n)
    {
        if(nums1[i] < nums2[j])
        {
            merged[k] = nums1[i];
            i++;
        }
        else
        {
            merged[k] = nums2[j];
            j++;
        }

        k++;
    }

    while(i < m)
    {
        merged[k] = nums1[i];
        i++;
        k++;
    }

    while(j < n)
    {
        merged[k] = nums2[j];
        j++;
        k++;
    }

    for(i = 0; i < m + n; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}
