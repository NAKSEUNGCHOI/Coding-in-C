/**
 *  main.c
 *************************************************************************************************************
 *  @author Nakseung Choi
 *  @date July-06-2022
 *  @brief Find the position of queen. Select a number between 1, 2, and 3.
 *  The game lasts until you lose all the cash. If you enter an amount of bet that is greater than your cash,
 *  the game stops.
 *************************************************************************************************************
 *  The purpose of this program is to learn how memory leak happens in C.
 *  If you don't explicitly free the char pointer at the end of the function, it will generate
 *  the array of 3 as many times as users play the game.
 *  You should be able to see it at Task Manager in windows.
 *************************************************************************************************************
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cash = 10000;
void Play(int bet){
    char *card = (char*)malloc(3*sizeof(char));
    card[0] = 'J'; card[1] = 'Q'; card[2] = 'K';
    printf("Shuffling ... \n");
    srand(time(NULL));
    for(int i = 0; i < 5; i++){
        int x = rand() % 3;
        int y = rand() % 3;
        int temp = card[x];
        card[x] = card[y];
        card[y] = temp;
    }
    int PlayersGuess;
    printf("What's the position of queen? ");
    scanf("%d", &PlayersGuess);
    if(card[PlayersGuess - 1] == 'Q'){
        cash += 3*bet;
        printf("You Win! Result = \"%c %c %c\" Total Cash = $%d\n", card[0], card[1], card[2], cash);
    }else{
        cash -= bet;
        printf("You Lost. Result = \"%c %c %c\" Total Cash = $%d\n", card[0], card[1], card[2], cash);
    }
    printf("***********************************************\n");
    free(card);
}

int main(){
    int bet;
    printf("Welcome to Choi's Casino! \n");
    printf("Total Cash = $%d\n", cash);
    printf("***********************************************\n");
    while(cash > 0){
        printf("What's your bet? \n");
        scanf("%d", &bet);
        if(bet == 0 || bet > cash) {
            printf("Invalid Amount: %d\n", bet);
            break;
        }
        Play(bet);
    }
}
