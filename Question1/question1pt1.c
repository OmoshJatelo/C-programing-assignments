#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () 
{
    int rounds, lucky_number, remainder, count=1, total_score=0;
    /*Seeding the random number to the current time*/
    srand (time(0));
    /*Generating a random number between 1 and 100*/
    int secret_number= rand() % 100 + 1;

    printf("Enter The Number Of Rounds You Wish To Play: ");
    scanf("%d", &rounds);

    return 0;
}