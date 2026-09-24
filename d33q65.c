#include <stdio.h>

int main() {
    int n, i, key;
    int arr[100];
    int low, high, mid;
    int index = -1;

    scanf("%d", &n);

    // Read sorted array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read element to search
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    // Binary search
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            index = mid;
            break;
        }
        else if (key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if (index != -1) {
        printf("Found at index %d", index);
    } else {
        printf("-1");
    }

    return 0;
}
