#include <stdio.h>

int main()
{
    int cars[12], i, num, sum=0, overloaded=0, highest, lowest, index=1, carsNum;
    int highestSignal, lowestSignal;
    float avg;

    for (i=0; i<=11; i=i+1)
    {
        printf("enter the number of cars at signal %d: ",i+1);
        scanf("%d", &num);
        cars[i]=num;
        sum=sum+num;
    }
    avg=(float)sum/12 ;

    highest=cars[0];
    highestSignal=1;
    lowest=cars[0];
    lowestSignal=1;

    while (index<=11)
    {
        carsNum=cars[index];
        if (carsNum>avg)
            overloaded=overloaded+1;
        
        if (carsNum>highest)
        {
            highest=carsNum;
            highestSignal=index+1;
        }
        
        if (carsNum<lowest)
        {
            lowest=carsNum;
            lowestSignal=index+1;
        }
        index=index+1;
    }
    printf("\nthe difference between the highest and lowest is %d\n", highest-lowest);
    printf("highest number of cars are %d and at the signal %d\n", highest, highestSignal);
    printf("lowest number of cars are %d and at the signal %d\n", lowest, lowestSignal);
    printf("the average number of cars are %.2f\n", avg);
    printf("the number of signals overloaded are %d", overloaded);
}