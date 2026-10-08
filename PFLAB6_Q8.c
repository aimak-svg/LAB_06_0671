#include <stdio.h>

int main()
{
    int seats[15];
    int i, booked=0, empty=0, firstAvailable=-1, lastAvailable=-1, count=0;

    printf("Enter the seating chart(1. booked, 0. empty):\n");
    for (i=0; i<=14; i=i+1)
    {
        scanf("%d", &seats[i]);
    }

    for (i=0; i<=14; i=i+1)
    {
        if (seats[i] == 1)
            booked=booked + 1;
        else
        {
            empty=empty + 1;
            if (firstAvailable == -1)
                firstAvailable=i;

            lastAvailable=i;
        }
    }

    printf("\nTotal booked seats: %d\n", booked);
    printf("Total empty seats: %d\n", empty);
    if (firstAvailable!=-1)
    {
        printf("First available seat: %d\n", firstAvailable+1);
        printf("Last available seat: %d\n", lastAvailable+1);
    }

    for (i=0; i <=14; i=i+1)
    {
        if (seats[i] == 0 && count<3)
        {
            seats[i]= 1;
            count=count+1;
        }
    }

    printf("Final seating chart:\n");

    for (i=0; i <=14; i=i+1)
    {
        printf("Seat %d= %d\n", i+1, seats[i]);
    }
}