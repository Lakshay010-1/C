#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_number;

    // printf("Random Number: %d\n", randomNumber);    //random number

    do{
        printf("Guess the number");
        scanf("%d", &guessed_number);
        if(guessed_number>randomNumber){
            printf("Enter a lower Number...\n");
        }
        else if(guessed_number<randomNumber){
            printf("Enter a higher Number...\n");
        }
        else{
            printf("You guessed it... Congo Pongo\n");
        }
        no_of_guesses++;

    } while (guessed_number != randomNumber);

    printf("You guessed the number in %d guesses", no_of_guesses);

    return 0;
}