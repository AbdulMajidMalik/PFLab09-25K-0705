#include <stdio.h>

int stringLength(char *ptr) {
    int length = 0;
    while (*ptr != '\0') {
        length++;
        ptr++;
    }
    return length;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int length = stringLength(str);
    printf("Length of the string: %d\n", length - 1);
    return 0;
}
