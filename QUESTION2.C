#include <stdio.h>

void arraySwap(int *a, int *b, int n) {
    for (int i = 0; i < n; i++) {
        int temp = *(a + i);
        *(a + i) = *(b + i);
        *(b + i) = temp;
    }
}

int main() {
    int lahore[] = {11, 22, 33, 44, 55};
    int karachi[] = {66, 77, 88, 99, 100};
    int n = 5;

    printf("Before swapping:\nLahore: ");
    for (int i = 0; i < n; i++) printf("%d ", lahore[i]);
    printf("\nKarachi: ");
    for (int i = 0; i < n; i++) printf("%d ", karachi[i]);

    arraySwap(lahore, karachi, n);

    printf("\n\nAfter swapping:\nLahore: ");
    for (int i = 0; i < n; i++) printf("%d ", lahore[i]);
    printf("\nKarachi: ");
    for (int i = 0; i < n; i++) printf("%d ", karachi[i]);
    return 0;
}
