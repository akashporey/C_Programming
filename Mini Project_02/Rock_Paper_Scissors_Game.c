/* Rock, paper, scissors is a game most of us have played during
   school time.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int player, computer = rand()%3;
/*
    Rock --> 0;
    Paper --> 1;
    scissors --> 2;
*/
    printf("Enter 0 for Rock, 1 for Paper, 2 for scissors: ");
    scanf("%d", &player);
    printf("You choose: %d\n", player);
    printf("Computer choose: %d\n", computer);

    if (player==0 && computer==0)
    {
       printf("It's a draw!");
    }
    else if (player==0 && computer==1)
    {
       printf("It's a lose!");
    }
    else if (player==0 && computer==2)
    {
       printf("It's a win!");
    }

    else if (player==1 && computer==0)
    {
       printf("It's a win!");
    }
    else if (player==1 && computer==1)
    {
       printf("It's a draw!");
    }
    else if (player==1 && computer==2)
    {
       printf("It's a lose!");
    }
    
    else if (player==2 && computer==0)
    {
       printf("It's a lose!");
    }
    else if (player==2 && computer==1)
    {
       printf("It's a win!");
    }
    else if (player==2 && computer==2)
    {
       printf("It's a draw!");
    }
    else{
        printf("Something went wrong!");
    }

    return 0;
}