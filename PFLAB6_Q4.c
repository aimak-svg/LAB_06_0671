#include <stdio.h>

int main()
{
    int marks[15], sum=0, count100 = 0, highest, lowest, i;
    float average;

    printf("Enter marks of 15 students: \n");

    for (i=0; i<=14; i=i+1)
    {
        scanf("%d", &marks[i]);
        if (marks[i]+5 >100)
            marks[i]=100;
        else
            marks[i]=marks[i] + 5;
    }
    highest=marks[0];
    lowest=marks[0];

    for (i=0; i<=14; i=i+1)
    {
        sum=sum + marks[i];
        if (marks[i] == 100)
            count100=count100 + 1;

        if (marks[i]>highest)
            highest=marks[i];

        if (marks[i]<lowest)
            lowest = marks[i];
    }
    average=(float)sum / 15;

    printf("\nNew marks:\n");
    for (i=0; i<=14; i=i+1)
    {
        printf("Student %d: %d\n", i+1, marks[i]);
    }

    printf("\nNew class average: %.2f\n", average);
    printf("Students with exactly 100: %d\n", count100);
    printf("Range: %d\n", highest-lowest);
}