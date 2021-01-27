/* Title: The Tortoise and the Hare Program  */
/* Author: Alberto E. Ramirez                */
/* Date: 1/22/2021                           */
/* Simulation Program                        */

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>/* Preprocessor directive for input and output functions */
#include <stdlib.h>/* Preprocessor directive for the srand function  */
#include <time.h>/* Preprocessor directive for time */

/* Function Prototypes */
void printInstructions(void);/* Function that provides race instructions */
void moveTortoise(int* turtle);/* Function that moves tortoise*/
void moveHare(int* hare);/* Function that moves hare*/
void printCurrentPosition(int turtle, int hare);/* Function that displays current positions*/
void results(int turtle, int hare);/* Function that displays results*/

int main(void)
{
    /* Random Number Generator */
    srand(time(NULL));
    
    /* Variable declaration */
    int turtle = 1;/* Variables declaration for variable turtle and initialization to 1 */
    int hare = 1;/* Variables declaration for variable hare and initialization to 1 */
    int timer = 0;/* Variables declaration for variable timer and initialization to zero */

    /* Function Calls*/
    printInstructions();/* Function call for function that provides race instructions */

    /* Conditional Statement for counter while loop */
    while (turtle < 70 && hare < 70)
    {
        moveTortoise(&turtle);
        moveHare(&hare);
        printCurrentPosition(turtle, hare);
        timer++;
    }

    results(turtle, hare);

    

    getchar();
    getchar();

    return(0);/* End of function main  */

}

/* Function Declarations for function print instructions */
void printInstructions(void)/* Function that provides race instructions */
{

    /* Displays Instructions */
    printf("Welcome to the Tortoise and Hare Program\n");
    printf("\nOn your marks... \n");
    printf("\nBANG!!!... \n");
    printf("\nAND THEY ARE OFF!!!... \n");

}

/* Function Declarations for function print current position */
void printCurrentPosition(int turtle, int hare)/* Function that displays current positions*/
{

    /* Local Variable Declaration */
    int count;
    

    /* For loop for race execution  */
    for (count = 1; count <= 70; count++)

        if (count == turtle && count == hare) 
        {
            printf("OUCH!!!");
        } 
        else if (count == hare) 
        {
            printf("H");
        } 
        else if (count == turtle) 
        {
            printf("T");
        } 
        else {
            printf(" ");
        } 

    printf("\n");
}

/* Function Declarations for function results */
void results(int turtle, int hare)/* Function that provides race results */
{

    /* Displays Results */
    if (turtle >= hare) 
    {
        printf("\nTURTLE CONGRATS...YOU WIN!!!\n");
    } 
    else
    {
        printf("\nHARE CONGRATS...YOU WIN!!!\n");
    }

}

/* Function Declarations for function move tortoise */
void moveTortoise(int* turtle) /* Function that moves toroise */
{
    /* Variable Declaration */
    int i;/* Local variable declaration for random number 'i' */

    i = rand() % 10 + 1; /* Random number generator to generate random numbers from 1-10 */

    /* Conditional Statement to determine progress */
    if (i >= 1 && i <= 5) /* Fast plod random number integer */
    { 
        *turtle += 3;
    }
    else if (i == 6 && i == 7) /* Slip random number integer */
    { 
        *turtle -= 6;
    } 
    else /* Slow plod random number integer */
    { 
        ++(*turtle);
    } 

    /* Conditional statement checks tortoise positions to make sure they stay within positions 1-70 */
    if (*turtle < 1) 
    {
        *turtle = 1;
    } 
    if (*turtle > 70)
    {
        *turtle = 70;
    }

}

/* Function Declarations for function move hare */
void moveHare(int* hare) /* Function that moves hare */
{
    /* Variable Declaration */
    int j;/* Local variable declaration for random number 'j' */

    j = rand() % 10 + 1; /* Random number generator to generate random numbers from 1-10 */

    /* Conditional Statement to determine progress */
    if (j == 3 || j == 4) /* Big hop random number integer */
    {
        *hare += 9;
    }
    else if (j == 5) /* Big slip random number integer */
    {
        *hare -= 12;
    }
    else if (j >= 6 && j <= 8) /* Small hop random number integer */
    {
        ++(*hare);
    }
    else if (j == 10) /* Small slip random number integer */
    {
        *hare -= 2;
    }
    

    /* Conditional statement checks tortoise positions to make sure they stay within positions 1-70 */
    if (*hare < 1)
    {
        *hare = 1;
    }
    if (*hare > 70)
    {
        *hare = 70;
    }

}