#include <stdio.h>

#define MAX_item 100

struct item
{
    char name[50];
    int quantity;
    float price;
    float total;
};

void printbill(struct item items[], int itemcount, float grandtotal)
{
    printf("----------------------------------------\n");
    printf("            Bill SUMMARY                 \n");
    printf("----------------------------------------\n");
    printf("S.no   item         quantity    price     total\n");
    for (int i = 0; i < itemcount; i++)
    {
        printf("%-6d %-12s %-11d %-10.2f %-9.2f\n", i + 1, items[i].name, items[i].quantity, items[i].price, items[i].total);
    }
    printf("----------------------------------------\n");
    printf("Grand Total: %.2f\n", grandtotal);
    printf("----------------------------------------\n");
}

int main()
{
    struct item items[MAX_item];
    int itemcount = 0;
    char choice;
    float grandtotal = 0.0;

    printf("Wellcome to the stationery shop.\n");

    do
    {
        printf("Enter the name of the item : ");
        scanf("%s", items[itemcount].name);
        printf("Enter the quantity of the item : ");
        scanf("%d", &items[itemcount].quantity);
        printf("Enter the price of per item : ");
        scanf("%f", &items[itemcount].price);

        items[itemcount].total = items[itemcount].quantity * items[itemcount].price;
        grandtotal += items[itemcount].total;
        itemcount++;

        printf("Do you want to add more items (y/n) : ");
        scanf(" %c", &choice);
    } while (choice == 'y' && itemcount < MAX_item);

    return 0;
}