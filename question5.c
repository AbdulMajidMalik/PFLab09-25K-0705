#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 8

void generateImage(int img[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            img[i][j] = rand() % 256;
}

void brightenImage(int img[SIZE][SIZE], int bright[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            bright[i][j] = (img[i][j] + 20 > 255) ? 255 : img[i][j] + 20;
}

void displayImage(int img[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++)
            printf("%3d ", img[i][j]);
        printf("\n");
    }
}

int main() {
    srand(time(0));
    int image[SIZE][SIZE], bright[SIZE][SIZE];

    generateImage(image);
    brightenImage(image, bright);

    printf("Original Image:\n");
    displayImage(image);
    printf("\nBrightened Image:\n");
    displayImage(bright);
    return 0;
}
