#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(0));

    const int MAX = 100;
    const int MIN = 1;

    int guesses;
    int guessed_number;
    int rand_number = (rand() % MAX) + MIN;

    do{    
        printf("Guess a number\n");
        scanf("%d",&guessed_number);

        if(guessed_number > rand_number){
            printf("You guessed too high\n");
        } else {
            printf("You guessed too low\n");
        }

        guesses++;
    }while(guessed_number != rand_number);

    printf("\nCongrats, you've got it right!\nAnswer:\t%d\nTries:\t%d",rand_number,guesses);
}