#include <stdio.h>

int main() {
    int rows, cols;
    int a[100][100];
    int sum = 0;

    scanf("%d %d", &rows, &cols);

    // Input matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Find sum
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum = sum + a[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}
