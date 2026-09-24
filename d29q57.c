#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int arr[100];
  
      scanf("%d", &n);
    // Read array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find sum
    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
      printf("%d", sum);
      return 0;
}
