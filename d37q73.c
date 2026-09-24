#include <stdio.h>

int main() {
    int rows, cols;
    int a[100][100];
    int rowSum[100];

    scanf("%d %d", &rows, &cols);

    // Input matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Find sum of each row
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;

        for (int j = 0; j < cols; j++) {
            rowSum[i] = rowSum[i] + a[i][j];
        }
    }

    // Print row sums
    for (int i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }

    return 0;
}
