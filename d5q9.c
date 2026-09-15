#include <stdio.h>
#include <math.h>

int main() {
    double p, r, t;
    scanf("%lf %lf %lf", &p, &r, &t);
    double si = (p * r * t) / 100;
    double ci = p * pow(1 + r / 100, t) - p;
    printf("Simple Interest=%g, Compound Interest=%g\n", si, ci);
    return 0;
}
