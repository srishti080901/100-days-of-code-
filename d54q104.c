#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int pivot = -1;

    for (int x = 1; x <= n; x++) {
        int leftSum = 0;
        int rightSum = 0;

        for (int i = 1; i <= x; i++) {
            leftSum += i;
        }

        for (int i = x; i <= n; i++) {
            rightSum += i;
        }

        if (leftSum == rightSum) {
            pivot = x;
            break;
        }
    }

    printf("%d", pivot);

    return 0;
}
