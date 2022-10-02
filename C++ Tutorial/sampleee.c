#include <stdio.h>

int main()
{
    int quantity, discount = 0;
    float totalexpense, price;

    printf("no of quantity:");
    scanf("%d", &quantity);
    printf("cost of 1 quantity:");
    scanf("%f", &price);
    if (quantity > 1000)
        discount = 10;

    totalexpense = (quantity * price) - (quantity * price * discount / 100);
    printf("total expense is %f", totalexpense);

    return 0;
}