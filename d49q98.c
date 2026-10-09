#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int lastSpace = -1;

    fgets(name, sizeof(name), stdin);

    // Remove newline
    name[strcspn(name, "\n")] = '\0';

    // Find the last space
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    // Print first initial
    printf("%c.", name[0]);

    // Print other initials before surname
    for (int i = 0; i < lastSpace; i++) {
        if (name[i] == ' ' && i != lastSpace)
            printf("%c.", name[i + 1]);
    }

    // Print surname
    printf(" %s", &name[lastSpace + 1]);

    return 0;
}
