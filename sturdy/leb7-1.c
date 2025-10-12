#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int command;
    int winningNumber, guess;
    int score;
    int low, high;
    char input[10]; 

    srand(time(NULL)); 
    while (1) {
        printf("Do you want to play game (1=play,-1=exit) :\n");
        scanf("%s", input);

        
        if (sscanf(input, "%d", &command) != 1) {
            printf("Please enter only 1 or -1.\n\n");
            continue;
        }

        if (command == -1) {
            printf("\nSee you again.\n");
            break;
        } else if (command != 1) {
            printf("Please enter only 1 or -1.\n\n");
            continue;
        }

      
        score = 100;
        winningNumber = rand() % 100 + 1;
        low = 1;
        high = 100;

        printf("(Score=%d)\n\n", score);

        while (1) {
            printf("Guess the winning number (%d-%d) :\n", low, high);
            scanf("%d", &guess);

            if (guess == winningNumber) {
                printf("\nThat is correct! The winning number is %d.\n", winningNumber);
                printf("\nScore this game: %d\n\n", score);
                break;
            } else {
                score -= 10;
                if (score < 0) score = 0;

                if (guess < winningNumber) {
                    printf("\nSorry, the winning number is HIGHER than %d. (Score=%d)\n\n", guess, score);
                    if (guess >= low) low = guess + 1;
                } else {
                    printf("\nSorry, the winning number is LOWER than %d. (Score=%d)\n\n", guess, score);
                    if (guess <= high) high = guess - 1;
                }
            }
        }
    }

    return 0;
}
