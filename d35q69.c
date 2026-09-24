#include <stdio.h>

int main() {
    int n, arr[100];
    int largest, secondLargest;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    secondLargest = arr[0];

    // Find largest element
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Find second largest element
    for (int i = 0; i < n; i++) {
        if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    printf("%d", secondLargest);

    return 0;
}
