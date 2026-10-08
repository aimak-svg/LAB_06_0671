#include <stdio.h>

int main()
{
    int transfers[10], i, flagged=0, normalSum=0, normalCount=0, largest;

    for (i=0; i<=9; i=i+1)
    {
        printf("Enter transfer %d: ", i+1);
        scanf("%d", &transfers[i]);
    }
    largest=transfers[0];

    for (i=0; i<=9; i=i+1)
    {
        if (transfers[i]<100)
        {
            printf("Transfer %d is too small\n", i+1);
            flagged=flagged+1;
        }
        else if (transfers[i]>200000)
        {
            printf("Transfer %d is too large\n", i+1);
            flagged=flagged+1;
        }
        else
        {
            normalSum=normalSum + transfers[i];
            normalCount=normalCount+1;
        }

        if (transfers[i]>largest)
            largest=transfers[i];
    }

    printf("\nTotal flagged transfers: %d\n", flagged);

    if (normalCount>0)
    {
        printf("normal transfers average: %.2f\n",
               (float)normalSum/normalCount);
    }
    else
        printf("no normal transfers\n");

    printf("Largest transfer: %d\n", largest);
}