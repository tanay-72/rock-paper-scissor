#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int randomNumber = rand();
    ;
    int k = randomNumber % 3 + 1;
    int r;
    /*rock = 1
    scissor = 2
    paper = 3*/
    printf("enter 1 for rock ,2 for scissor and 3 for paper : ");
    scanf("%d", &r);
    printf("computer chose %d\n",k);
    if (k == r)
        printf("TIE\n");
    if (k == 1 && r == 2)
        printf("YOU LOOSE\n");
    if (k == 1 && r == 3)
        printf("YOU WON\n");
    if (k == 2 && r == 1)
        printf("YOU WON\n");
    if (k == 2 && r == 3)
        printf("YOU LOOSE\n");
    if (k == 3 && r == 1)
        printf("YOU LOOSE\n");
    if (k == 3 && r== 2)
        printf("YOU WON\n");

    return 0;
}
