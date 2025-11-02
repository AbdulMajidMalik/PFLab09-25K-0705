#include <stdio.h>

float calcItemTotal(int qty, float price) {
    return qty * price;
}

int main() {
    char name[50], item[50];
    int n, qty;
    float price, total = 0;

    printf("Enter customer name: ");
    scanf("%s", name);
    printf("Enter number of items: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("\nEnter item %d name: ", i);
        scanf("%s", item);
        printf("Enter quantity and price per unit: ");
        scanf("%d %f", &qty, &price);
        total += calcItemTotal(qty, price);
    }

    printf("\nTotal bill for %s = Rs. %.2f\n", name, total);
    return 0;
}
