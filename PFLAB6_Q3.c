#include <stdio.h>
int main()
{
    int stock[10], minimum[10], i, reorder, index, totalReorder=0, largestReorder=0, largestProduct;

    for (i=0; i<=9; i=i+1)
    {
        printf("enter the current stock quantity for item %d: ", i+1);
        scanf("%d", &stock[i]);

        printf("enter the minimum required quantity for item %d: ", i+1);
        scanf("%d", &minimum[i]);
    }

    for (i=0; i<=9; i=i+1)
    {
        if (stock[i]<minimum[i])
        {
            reorder=minimum[i]-stock[i];
            printf("Product %d needs %d reordered\n", i+1, reorder);

            totalReorder=totalReorder+reorder;

            if (reorder>largestReorder)
            {
                largestReorder=reorder;
                largestProduct=i+1;
            }
        }
    }
    printf("Total units to be reordered: %d\n", totalReorder);
    printf("Largest reorder quantity: %d\n", largestReorder);
    printf("Product with largest reorder quantity: %d\n", largestProduct);
}