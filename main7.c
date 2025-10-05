#include <stdio.h>

struct Item {
    char name[50];
    int quantity;
};

int main() {
    struct Item item;

    printf("Enter item name: ");
    scanf("%s", item.name);

    printf("Enter quantity: ");
    scanf("%d", &item.quantity);

    printf("\nItem added:\nName: %s\nQuantity: %d\n", item.name, item.quantity);

    return 0;
}


