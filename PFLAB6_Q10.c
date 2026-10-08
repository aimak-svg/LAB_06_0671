#include <stdio.h>

int main()
{
    int amount, transactions=0, Withdrawn=0;

    printf("Enter withdrawal amount (0 to exit): ");
    scanf("%d", &amount);

    while (amount!=0)
    {
        transactions=transactions+1;
        Withdrawn=Withdrawn+amount;
        printf("Transaction processed: %d\n", amount);

        printf("Enter withdrawal amount (0 to exit): ");
        scanf("%d", &amount);
    }

    printf("\nSession ended\n");
    printf("Total transactions: %d\n", transactions);
    printf("Total amount withdrawn: %d\n", Withdrawn);
}