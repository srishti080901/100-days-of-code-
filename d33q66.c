#include <stdio.h>

int main() {
    int n, i, element;
    int arr[100];

    scanf("%d", &n);

    // Read sorted array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read element to insert
    scanf("%d", &element);

    // Shift larger elements to the right
    i = n - 1;

    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }

    // Insert element
    arr[i + 1] = element;
    n++;

    // Print updated array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
