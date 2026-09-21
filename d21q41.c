#include <stdio.h>

int main() {
    int n, first, last, temp, divisor = 1, middle;

    scanf("%d", &n);

    temp = n;

    last = n % 10;

    while (temp >= 10) {
        temp = temp / 10;
        divisor = divisor * 10;
    }

    first = temp;

    middle = (n % divisor) / 10;

    n = last * divisor + middle * 10 + first;

    printf("%d", n);

    return 0;
}
