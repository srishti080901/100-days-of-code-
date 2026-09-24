#include <stdio.h>

int main() {
    int r, c;
    int a[100][100];

    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int d = 0; d < r + c - 1; d++) {
        int start = (d < r) ? 0 : d - r + 1;
        int end = (d < c) ? d : c - 1;

        if (d % 2 == 0) {
            for (int j = start; j <= end; j++) {
                int i = d - j;
                printf("%d ", a[i][j]);
            }
        } else {
            for (int j = end; j >= start; j--) {
                int i = d - j;
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}
