#include <stdio.h>

int main() {
    int n, nums[100];
    int majority = -1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }

        if (count > n / 2) {
            majority = nums[i];
            break;
        }
    }

    printf("%d", majority);

    return 0;
}
