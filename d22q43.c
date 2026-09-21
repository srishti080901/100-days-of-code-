#include <stdio.h>

int main() {
    int n, original, digit, sum = 0;
    int i, fact;

    scanf("%d", &n);

    original = n;

    while (n != 0) {
        digit = n % 10;

        fact = 1;

        for (i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;

        n = n / 10;
    }

    if (sum == original) {
        printf("Strong number");
    }
    else {
        printf("Not strong number");
    }

    return 0;
}
