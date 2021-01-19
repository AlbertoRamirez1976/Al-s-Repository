/* Title: Rock, Paper, Scissor Program  */
/* Author: Alberto E. Ramirez           */
/* Date: 1/14/2021                      */
/* Game                                 */

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>/*  Preprocessor directive for standard input and output functions */
#include <stdlib.h>/* Preprocessor directive for random number generator function    */
#include <time.h>/*   Preprocessor directive for the time function */

/* Function Prototypes */
int checkInput(char ply1Choice);/* Function Prototype to check for user input */
char getHalChoice();/* Function Prototype that generates a random number of guesses for Hal the computer */
int processPlay(char ply1Choice, char halChoice);/* Function Prototype that manages the palying environment */

int main()
{
    /* Variable declaration */
    char ply1Choice = '1';
    char halChoice = '2';
    int winner = 0, validPlay = 0;

    srand(time(NULL));

    /* Assigns halChoice by using a randon number generator. */
    halChoice = getHalChoice();

    /* Opening Statement */
    printf("Welcome to the Rock, Paper, Scissor game, where you play against Hal the computer.\n");
    
    /* Input functions */
    printf("\nEnter:\nr or R for Rock\np or P for Papper\ns or S for Scissors\nx or X to quit\n"); /* Gets user input from the provided menu items */
    scanf(" %c", &ply1Choice);/* Assigns user input to the ply1Choice variable */
        
    /* The validPlay function accepts the checkInput argument and verifies that the appropriate input was entered */
    validPlay = checkInput(ply1Choice);
   
    if (validPlay == 1) /* Process play function returns 1 for player 1 win, 2 for player 2 win, 0 for tie. */
    {
        winner = processPlay(ply1Choice, halChoice); /* Displays results */
        if (winner == 1)
        {
            printf("\nPlayer 1 You Win\n");
        }
        else if (winner == 2)
        {
            printf("\nPlayer 2 Hal Wins\n");
        }
        else 
        {
            printf("\nGame is Tied\n");
        }
    }
    else if (validPlay == 2) /* Process play function returns 1 for player 1 win, 2 for player 2 win, 0 for tie. */
    {
        winner = processPlay(ply1Choice, halChoice); /* Displays results */
        if (winner == 1)
        {
            printf("\nPlayer 2 Hal Wins\n");
            
        }
        else if (winner == 2)
        {
            printf("\nGame is Tied\n");
        }
        else
        {
            printf("\nPlayer 1 You Win\n");
           
        }
    }
    else
    {
        printf("\nGame Not Played\n");
       
    }

    getchar();
    getchar();

    return(0);
}

int checkInput(char ply1Choice)/* Checkinput function returns ply1Choice selection for game play */
{
    if (ply1Choice == 'r' || ply1Choice == 'R' || ply1Choice == 'p' || ply1Choice == 'P' || ply1Choice == 's' || ply1Choice == 'S') //condition for valid input
    {
        return (1);
    }
    else if (ply1Choice == 'x' || ply1Choice == 'X')
    {
        return (0);
    }
    
}

char getHalChoice()/* GetHal function returns a random number choice during game play */
{
    char h1;
    int choice = 0;
    choice = rand() % 3;
    switch (choice) 
    {

    case 0:
        h1 = 'r';
        break;
    case 1:
        h1 = 'p';
        break;
    case 2:
        h1 = 's';
        break;
    default:
        h1 = 's';
    }
    return(h1);

}

int processPlay(char ply1Choice, char halChoice)
{
    ply1Choice = (ply1Choice); 
    halChoice = (halChoice);
    if (ply1Choice == halChoice) 
    {
        return 0;
    }
    else
    {
        if ((ply1Choice == 'r' && halChoice == 's') || (ply1Choice == 's' && halChoice == 'p') || (ply1Choice == 'p' && halChoice == 'r'))
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
    return 0;
};