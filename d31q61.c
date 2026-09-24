#include <stdio.h>

int main() {
    int n, i, key;
    int arr[100];
    int index = -1;

    scanf("%d", &n);

    // Read array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read element to search
    scanf("%d", &key);

    // Linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        printf("Found at index %d", index);
    } else {
        printf("-1");
    }

    return 0;
}
