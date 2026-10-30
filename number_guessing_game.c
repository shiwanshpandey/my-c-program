#include<stdio.h>
int main()
{
    int secret=30;
    int guess;
    int attempts=0;
    printf("==== NUMBER GUESSING GAME ====\n");
    printf("Guess the number between 1 and 50: ");
    scanf("%d", &guess);
    while(guess != secret)
    {
        attempts++;
        if(guess > secret)
        {
            printf("Too high! Try again: ");
        }
        else
        {
            printf("Too low! Try again: ");
        }
        printf("guess a number between 1 and 50: ");
        scanf("%d", &guess);
    }
    attempts++;
    printf("Congratulations! You guessed the correct number .\n");
    printf("Total attempts: %d\n", attempts);
    printf("Thank you for playing the Number Guessing Game!\n");
    return 0;
}