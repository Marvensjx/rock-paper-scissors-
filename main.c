//
//  main.c
//  13daily
//
//  Created by Marvens Luc on 3/24/22.
//  create a rock paper scissors game //
// I spent 1h on it//

#include <stdio.h>
void clear_keyboard_buffer(void);
enum choice {ROCK , PAPER, SCISSORS};
typedef enum choice CHOICE;
enum boolean{TRUE,FALSE};
typedef enum boolean BOOLEAN;
BOOLEAN again(void);
CHOICE player(void);

int main(int argc, const char * argv[]) {
    
    do{
    printf("playerone is your turn\n");
    int player_one = player();

    
    printf("playertwo it your turn\n");
    int player_two = player();
    
    
    if (player_one == PAPER && player_two == ROCK){
            printf("player one wins\n");
            printf("paper covers rock\n");
        }
        else if(player_one == ROCK && player_two == SCISSORS){
            printf("player one wins\n");
            printf("rock beats scissors");
        }
            
        else if(player_one == SCISSORS && player_two == PAPER){
                printf("scissors cut paper\n");
                printf("player one wins");
            }
         else if(player_two == PAPER && player_one == ROCK){
            printf("player two wins\n");
            printf("paper covers rock\n");
        }
        else  if(player_two == ROCK && player_one == SCISSORS){
            printf("player two wins\n");
            printf("rock beats scissors\n");
        }
        else  if(player_two == SCISSORS && player_one == PAPER){
                printf("scissors cut paper\n");
                printf("player two wins\n");
            }
        else if(player_one == PAPER && player_two == PAPER){
            printf("draw\n");
        }
        else if(player_one == ROCK && player_two == ROCK){
            printf("draw\n");
        }
        else  if(player_one == SCISSORS && player_two == SCISSORS){
                printf("draw\n");
            }
}while(again());
    
return 0;
}



void clear_keyboard_buffer(void)
{
    
    char c;
    scanf("%c",&c);
    while (c != '\n') {
        scanf("%c",&c);
    }
}

CHOICE player(void)
{
   char choice;
    do{
        
        printf("Please choose Rock, Paper, or Scissors\n");
        scanf(" %c",&choice);
        clear_keyboard_buffer();
        
        
    }while( choice != 'r' && choice != 'R' && choice != 's' && choice != 'S' && choice != 'p' && choice != 'P');
    
    if(choice == 'r' || choice == 'R'){
        return ROCK;
    }
    else if (choice == 's' || choice == 'S'){
        
        return SCISSORS;
    }
    else if (choice == 'P' || choice == 'p'){
        
        return PAPER;
    }
    
    return 0;
}


BOOLEAN again(void)
{
  char choice;
    do{
        printf("Do you want to continue?");
        scanf(" %c",&choice);
        clear_keyboard_buffer();
        
    }while(choice != 'Y' && choice != 'y' && choice != 'n' && choice != 'N');
    
    //if (choice == 'y' || choice == 'Y') {
        //return TRUE;


    return choice == 'y' || choice == 'Y';
}
