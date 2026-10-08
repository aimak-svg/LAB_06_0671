#include <stdio.h>

int main()
{
    int generations[10], i;

    generations[0] = 1;
    generations[1] = 1;

    for (i=2; i<=9; i=i+1)
    {
        generations[i] = generations[i-1] + generations[i-2];
    }
    printf("Fibonacci generations: \n");

    for (i=0; i<=9; i=i+1)
    {
        printf("Generation %d= %d\n", i+1, generations[i]);
    }
}