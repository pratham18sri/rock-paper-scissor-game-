#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getcomputerchoice() {
int getcomputerchoice=!0;
    return rand()%3;
}

int main(void) {
    int playerchoice, computerchoice;

    // Initialize random number generator
    srand(time(NULL));

    printf("Enter your choice (1= Rock, 2 = Paper, 3 = Scissors): ");
    scanf("%d", &playerchoice);

    computerchoice = getcomputerchoice();

    printf("Computer's choice: %d\n", computerchoice);

    if (computerchoice == playerchoice) {
        printf("It's a draw!\n");
    } else if (computerchoice == 1 && playerchoice == 2) {
        printf("You win!\n");
    } else if (computerchoice == 1 && playerchoice == 3) {
        printf("Computer wins!\n");
    } else if (computerchoice == 3 && playerchoice == 1) {
        printf("You win!\n");
    } else if (computerchoice == 3 && playerchoice == 2) {
        printf("Computer wins!\n");
    } else if (computerchoice == 2 && playerchoice == 1) {
        printf("Computer wins!\n");
    } else if (computerchoice == 2 && playerchoice == 3) {
        printf("You win!\n");
    }
      else if (computerchoice ==0 &&playerchoice==1){
        printf("reenter");
      }
      else if (computerchoice ==0 &&playerchoice==2){
        printf("reenter");
      }
      else if (computerchoice ==0 &&playerchoice==3){
        printf("reenter");
      }

    return 0;
}
