#include <stdio.h>

int main() {
    int celsius;
    scanf("%d", &celsius);
    int fahrenheit = (celsius * 9 / 5) + 32;
    printf("Fahrenheit=%d\n", fahrenheit);
    return 0;
}
