#include <stdio.h>

void binaryconversion(int n) {
    int binary[32];
    int i = 0;
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
    printf("\n");
}

int main() {
    int num;
    printf("Enter decimal: ");
    scanf("%d", &num);
    binaryconversion(num);
    return 0;
}
