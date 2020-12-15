#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int randnum;
    int guesses= 1;
    srand(time(0));// to generate a randnum after 0 seconds
    randnum = rand()%100+1;// generates a randnum between 1to100
    // Generates a random number from 1 to 100
    int guess;
    printf("Guess the number:\n");
    scanf("%d", &guess);
    while(guess!=randnum){
        if(guess>randnum){
            ++guesses;
            printf("Too high.\n");
            scanf("%d", &guess);
        }
        else if(guess<randnum){
            ++guesses;
            printf("Too low.\n");
            scanf("%d", &guess); 
        }
    
        
    }
    printf("Yay!!!You guessed the number in %d guesses.\n",guesses);
    return 0;
}