#include <stdio.h>

int main()
{
    int notes500[5] = {10, 5, 8, 12, 6};
    int notes200[5] = {20, 15, 10, 8, 14};
    int notes100[5] = {30, 25, 40, 35, 20};
    int i, totalMoney = 0, withdraw;

    for (i=0; i<=4; i=i+1)
    {
        totalMoney=totalMoney + (notes500[i] * 500);
        totalMoney=totalMoney + (notes200[i] * 200);
        totalMoney=totalMoney + (notes100[i] * 100);
    }

    printf("Total money available in ATM: %d\n", totalMoney);
    printf("Enter withdrawal amount: ");
    scanf("%d", &withdraw);

    if (withdraw>totalMoney)
        printf("Insufficient Funds\n");
    else if (withdraw%100 != 0)
        printf("Invalid Amount\n");
    else
        printf("Transaction Approved\n");
}