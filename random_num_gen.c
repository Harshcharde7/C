#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number_to_guess, player_guess, attempts = 0;

    srand(time(0));
    number_to_guess = rand() % 100 + 1; // Generates a random number between 1 and 100
    printf("The number is %d", number_to_guess);
    // Keep running the loop until the number is guessed
    return 0;
}