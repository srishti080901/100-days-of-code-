#include <stdio.h>

int main() {
    int n, nums[100];
    int totalSum = 0, leftSum = 0;
    int pivot = -1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        totalSum += nums[i];
    }

    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - nums[i];

        if (leftSum == rightSum) {
            pivot = i;
            break;
        }

        leftSum += nums[i];
    }

    printf("%d", pivot);

    return 0;
}
