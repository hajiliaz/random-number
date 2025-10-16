main.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, tries = 0;

    srand(time(NULL));
    secret = rand() % 80 + 1;

    printf("I have chosen a number between 1 and 80.\n");
    printf("Can you guess it?\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        tries++;

        if (guess > secret) {
            printf("Too high!\n");
        } else if (guess < secret) {
            printf("Too low!\n");
        } else {
            printf("🎉 Congratulations! You guessed it in %d tries!\n", tries);
        }

    } while (guess != secret);

}
