#include <stdio.h>
int main() {
    long long n;
    int count[10] = {0};
    int digit, i;
    int maxCount = 0, maxDigit = 0;

    scanf("%lld", &n);

    // Count frequency of each digit
    while (n > 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    // Find digit with maximum frequency
    for (i = 0; i <= 9; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("%d", maxDigit);
    return 0;
}
