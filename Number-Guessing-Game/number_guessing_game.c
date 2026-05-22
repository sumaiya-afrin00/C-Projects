#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int generateRandomNumber(){
    return rand()%100 + 1;
}

int takeGuess(){

    int guess;

    printf("Enter your guess (1-100): ");
    scanf("%d", &guess);

    return guess;
}

void checkGuess(int guess, int randomNumber){

    if(guess < randomNumber){
        printf("Too low!\n");
    }

    else if(guess > randomNumber){
        printf("Too high!\n");
    }

    else{
        printf("Correct! You won!\n");
    }

}

void playGame(){

    int randomNumber = generateRandomNumber();

    int guess;

    int attempts = 0;

    while(1){

        guess = takeGuess();

        attempts++;

        checkGuess(guess, randomNumber);

        if(guess == randomNumber){

            printf("Attempts: %d\n", attempts);

            break;
        }

    }

}

int main(){

    srand(time(NULL));

    printf("\n\n=== Number Guessing Game ===\n\n");

    playGame();

    return 0;
}