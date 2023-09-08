#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number_to_guess, player_guess, attempts = 0;

    // Initialize random number generator with the current time
    srand(time(0));
    // Generate a random number between 1 and 100
    number_to_guess = rand() % 100 + 1;

    // printf("The number is %d\n", number_to_guess);

    printf("Welcome to the Number Guessing Game!\n\n");
    printf("I've selected a random number between 1 and 100. Try to guess it.\n\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &player_guess);
        attempts++;

        if (player_guess < number_to_guess)
        {
            printf("Too low! Try again.\n\n");
        }
        else if (player_guess > number_to_guess)
        {
            printf("Too high! Try again.\n\n");
        }
        else
        {
            printf("Congratulations! You've guessed the number %d in %d attempts!\n", number_to_guess, attempts);
        }
    } while (player_guess != number_to_guess);

    return 0;
}
