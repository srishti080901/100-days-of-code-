#include <stdio.h>

int main() {
    double radius;
    scanf("%lf", &radius);
    double area = 3.14159 * radius * radius;
    double circumference = 2 * 3.14159 * radius;
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);
    return 0;
}
