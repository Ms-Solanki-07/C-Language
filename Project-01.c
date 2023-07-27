//  NUMBER GUSESSING GAME
/* We will Write a program that generates a random number and asks the player to guess it. If the player's 
   guess is higher then the actual number, the program display (Print) "Lower Number Please", Similarly if
   the user's guess is too low, the program prints "Higher number Please".
   When The user Guesses The Correct Number, The Program Display The number of guesses the player used to
   arrive at the number.
   HINT-Use Loops
        Use a random Number Generator
*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main () {
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100+1;
            //   Generate a random Number Between 1 & 100

    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if(guess > number){
            printf("Lower Number Please!\n");
        }
        else if(guess < number){
            printf("Higher Number Please!\n");
        }
        else{
            printf("You Guessed it in %d attempts\n", nguesses );
        }
        nguesses ++;
    } while (guess != number);


    return 0;
}

