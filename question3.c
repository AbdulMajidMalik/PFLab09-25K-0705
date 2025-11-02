#include <stdio.h>
#include <string.h>

int anagrams(char str1[], char str2[]) {
    int count[256] = {0};
    if (strlen(str1) != strlen(str2))
        return 0;

    for (int i = 0; str1[i] && str2[i]; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }
    for (int i = 0; i < 256; i++)
        if (count[i] != 0)
            return 0;

    return 1;
}

int main() {
    char a[50], b[50];
    printf("Enter first word: ");
    scanf("%s", a);
    printf("Enter second word: ");
    scanf("%s", b);

    if (anagrams(a, b))
        printf("The words are anagrams.\n");
    else
        printf("The words are NOT anagrams.\n");
    return 0;
}
