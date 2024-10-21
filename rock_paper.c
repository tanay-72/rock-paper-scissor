#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*rock = 1
    scissor = 2
    paper = 3*/
    int r;
    int c = 0;
    int p = 0;
    for (int i = 0;; i++)
    {
        unsigned int seed = time(0);
        int randomNumber = rand_r(&seed);
        int k = randomNumber % 3 + 1;
        printf("enter 1 for rock ,2 for scissor and 3 for paper : ");
        scanf("%d", &r);
        printf("computer chose %d\n", k);
        if (k == r)
            printf("TIE\n");
        if (k == 1 && r == 2)
        {
            printf("YOU LOOSE\n");
            c++;
        }
        if (k == 1 && r == 3)
        {
            printf("YOU WON\n");
            p++;
        }
        if (k == 2 && r == 1)
        {
            printf("YOU WON\n");
            p++;
        }
        if (k == 2 && r == 3)
        {
            printf("YOU LOOSE\n");
            c++;
        }
        if (k == 3 && r == 1)
        {
            printf("YOU LOOSE\n");
            c++;
        }
        if (k == 3 && r == 2)
        {
            printf("YOU WON\n");
            p++;
        }
        if (c == 5 || p == 5)
        {
            break;
        }
    }
    if (c == 5)
    {
        printf("computer won\n");
    }
    if (p == 5)
    {
        printf("YOU WON");
    }
    return 0;
}
