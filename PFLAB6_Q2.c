#include <stdio.h>
#include <ctype.h>

int main()
{
    char password[100];
    int score[5], i, strongest=0, has123=0, below10=0, index, length;

    for (i=0; i<=4; i=i+1)
    {
        printf("Enter password %d: ", i+1);
        scanf("%s", password);

        score[i]=0;
        has123=0;
        length=0;

        for (index=0; password[index]!='\0'; index=index+1)
        {
            if (islower(password[index]))
                score[i] = score[i]+1;
            else if (isupper(password[index]))
                score[i] = score[i]+2;
            else if (isdigit(password[index]))
                score[i] = score[i]+3;

            length=length+1;
        }
        if (length>=8)
            score[i]= score[i]+5;

        for (index=0; index<=length-3; index=index+1)
        {
            if (password[index] == '1' && password[index+1] == '2' && password[index+2] == '3')
                has123=1;
        }

        if (has123 == 1)
            score[i]=score[i]-3;

        if (score[i]<10)
            below10=below10+1;

        if (score[i] > score[strongest])
            strongest=i;

        printf("Password: %s\n", password);
        printf("Score %d: %d\n", i+1, score[i]);
    }

    printf("Strongest password score: %d\n", score[strongest]);
    printf("Passwords below 10: %d\n", below10);
}