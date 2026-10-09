#include <stdio.h>

int main() {
    char name[100];

    fgets(name, sizeof(name), stdin);

    // First character is the first initial
    printf("%c.", name[0]);

    // Character after every space is an initial
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != '\n') {
            printf("%c.", name[i + 1]);
        }
    }

    return 0;
}
