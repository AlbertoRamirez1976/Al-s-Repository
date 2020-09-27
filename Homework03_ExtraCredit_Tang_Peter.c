#include<stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_CHOICES 8

/*******************************************
/* Homework 03 - Extra Credit
/*
/* This program will allow a user to pick
/* where to send a knight on a chess board
/*
/* Peter Tang
/* 959213
/* 5/11/18
*******************************************/

//GLOBAL VARS
const int NUM_ROWS = 8;
const int NUM_COLS = 8;

//Struct position of possible moves
struct position
{
    int row;
    int col;
};

//Struct possible position for knight
struct posPositions
{
    int possibleRow[MAX_CHOICES];
    int possibleCol[MAX_CHOICES];
};

//Possible knight positions
struct posPositions possiblePositions = 
	{
        {-1, -2, -2, -1, 1, 2, 2, 1},
    	{-2, -1, 1, 2, -2, -1, 1, 2}
    };


/*******************************************
* void printBoard
*
* Prints the contents of the board with margins
*******************************************/
void printBoard(char board[NUM_ROWS][NUM_COLS]);

/*******************************************
* void initBoard
*
* Fills board with spaces for init
*******************************************/
void initBoard(char board[NUM_ROWS][NUM_COLS]);

/*******************************************
* void updateBoard
*
* Updates board with possible positions
* Returns: updated board
*******************************************/
void updateBoard(char board[NUM_ROWS][NUM_COLS], struct position, struct position*, int);

/*******************************************
* int printMenu
*
* Prints input menu for user
* Returns index of choices
*******************************************/
int printMenu(struct position choices[MAX_CHOICES], int numChoices);

/*******************************************
* void getValidChoices()
*
* Gets valid choices to place horse
* Returns index of choices
*******************************************/
void getValidChoices(struct position currentPosition, struct position*, int*);

/*******************************************
* char getColChar(int row)
*
* Gets char rep of row on board 
* Returns char of row index
*******************************************/
char getColChar(int row);

/*******************************************
* int getRowNum(int col)
*
* Gets display index of col on board
* Returns display index of col
*******************************************/
int getRowNum(int col);

/*******************************************
* 
* Main program function
*
*******************************************/
int main()
{
	//Declarations
    char board[NUM_ROWS][NUM_COLS];
    struct position choices[MAX_CHOICES];
    struct position currentPosition = {3,3};
    int numChoices = 8;
    int userChoice = -1;

    //Init user input
    getValidChoices(currentPosition, choices, &numChoices);
    updateBoard(board, currentPosition, choices, numChoices);
    while(userChoice < 0 || userChoice > numChoices)
    {
        printBoard(board);
	    userChoice = printMenu(choices, numChoices);
    }

	//Cycle through input
    while(userChoice != 0)
    {
        //Update current position
        currentPosition.row = choices[userChoice - 1].row;
        currentPosition.col = choices[userChoice - 1].col;

        getValidChoices(currentPosition, choices, &numChoices);
        updateBoard(board, currentPosition, choices, numChoices);
        userChoice = -1;
        while(userChoice < 0 || userChoice > numChoices)
        {
            printBoard(board);
	        userChoice = printMenu(choices, numChoices);
        }      
    }

    printf("\n Thanks for using my knight program!");
    getchar();

    return 0;
}



/*******************************************
* void updateBoard
*
* Updates board with possible positions
* Returns: updated board
*******************************************/
void updateBoard(char board[NUM_ROWS][NUM_COLS], struct position currentPosition, struct position* choices, int numChoices)
{
    int i, row, col;
   
    //zero out board 
    initBoard(board);

    //update possible choiecs
    for(i = 0; i < numChoices; i++)
    {
        board[choices[i].row][choices[i].col] = '1' + i;
    }

    board[currentPosition.row][currentPosition.col] = 'k';
}
/*******************************************
* void printBoard
*
* Prints the contents of the board with margins
*******************************************/
void printBoard(char board[NUM_ROWS][NUM_COLS])
{
    int row, col, hor;
    char rHead = 'A';
    int cHead = 1;

    //Print out Column Header row    
    printf("\n    ");
    for(row = 0; row < NUM_ROWS; row++, rHead++)
    {
        printf(" %c  ", rHead);
    }
    printf("\n\n");

    //Print out each row
    for(row = 0; row < NUM_ROWS; row++, cHead++)
    {
        printf(" %d |", cHead);
        for(col = 0; col < NUM_COLS; col++)
        {
            printf(" %c |", board[row][col]);
        }
        puts("");

        printf("    ");
        for(hor = 0; hor < NUM_ROWS; hor++)
        {
            printf("--- ");
        }
        puts("");
    }

    puts("");
}

/*******************************************
* void initBoard
*
* Fills board with spaces for init
*******************************************/
void initBoard(char board[NUM_ROWS][NUM_COLS])
{
    int row, col;
    
    //Zero out board
    for(row = 0; row < NUM_ROWS; row++)
    {
        for(col = 0; col < NUM_COLS; col++)
        {
            board[row][col] = ' ';
        }
    }
}

/*******************************************
* int printMenu
*
* Prints input menu for user
* Returns index of choices
*******************************************/
int printMenu(struct position choices[MAX_CHOICES], int numChoices)
{
    int i, indexChoice = -1;
    char buffer[100];

    //Prints out menu selection
    printf(" Where would you like to move (0 to quit)?\n\n" );
    for(i = 0; i < numChoices; i++)
    {
        printf(" %d.) %c%d  ", i+1, getColChar(choices[i].col), getRowNum(choices[i].row));
    }
    printf("\n\n ");

    //Use fgets to get whole line, easier to error check
    fgets(buffer, 100, stdin);
    if(strlen(buffer) > 2 || strlen(buffer) < 2 || !isdigit(buffer[0])) return -1;
    else return buffer[0] - '0';

}


/*******************************************
* void getValidChoices()
*
* Gets valid choices to place horse
* Returns index of choices
*******************************************/
void getValidChoices(struct position currentPosition, struct position* choices, int* numChoices)
{
    int count = 0;
	int i, newRow, newCol;

    //Cycle through all possibilities
	for(i = 0; i < MAX_CHOICES; i++)
    {
        newRow = currentPosition.row + possiblePositions.possibleRow[i];
        newCol = currentPosition.col + possiblePositions.possibleCol[i];
        
        //Check if new coords are valid
        if(newRow >= 0 && newRow < NUM_ROWS &&
           newCol >= 0 && newCol < NUM_COLS)
        {
           choices[count].row = newRow;
           choices[count].col = newCol;
           count++;
        }    
    }//end for to get choices

    *numChoices = count;
}

/*******************************************
* char getColChar(int row)
*
* Gets char rep of row on board 
* Returns char of row index
*******************************************/
char getColChar(int row)
{
    return row + 'A';
}

/*******************************************
* int getRowNum(int col)
*
* Gets display index of col on board
* Returns display index of col
*******************************************/
int getRowNum(int col)
{
    return col + 1; 
}




/********** Sample Run ***********

     A   B   C   D   E   F   G   H  

 1 |   |   |   |   |   |   |   |   |
    --- --- --- --- --- --- --- --- 
 2 |   |   | 2 |   | 3 |   |   |   |
    --- --- --- --- --- --- --- --- 
 3 |   | 1 |   |   |   | 4 |   |   |
    --- --- --- --- --- --- --- --- 
 4 |   |   |   | k |   |   |   |   |
    --- --- --- --- --- --- --- --- 
 5 |   | 5 |   |   |   | 8 |   |   |
    --- --- --- --- --- --- --- --- 
 6 |   |   | 6 |   | 7 |   |   |   |
    --- --- --- --- --- --- --- --- 
 7 |   |   |   |   |   |   |   |   |
    --- --- --- --- --- --- --- --- 
 8 |   |   |   |   |   |   |   |   |
    --- --- --- --- --- --- --- --- 

 Where would you like to move (0 to quit)?

 1.) B3   2.) C2   3.) E2   4.) F3   5.) B5   6.) C6   7.) E6   8.) F5  

 1

     A   B   C   D   E   F   G   H  

 1 | 1 |   | 2 |   |   |   |   |   |
    --- --- --- --- --- --- --- --- 
 2 |   |   |   | 3 |   |   |   |   |
    --- --- --- --- --- --- --- --- 
 3 |   | k |   |   |   |   |   |   |
    --- --- --- --- --- --- --- --- 
 4 |   |   |   | 6 |   |   |   |   |
    --- --- --- --- --- --- --- --- 
 5 | 4 |   | 5 |   |   |   |   |   |
    --- --- --- --- --- --- --- --- 
 6 |   |   |   |   |   |   |   |   |
    --- --- --- --- --- --- --- --- 
 7 |   |   |   |   |   |   |   |   |
    --- --- --- --- --- --- --- --- 
 8 |   |   |   |   |   |   |   |   |
    --- --- --- --- --- --- --- --- 

 Where would you like to move (0 to quit)?

 1.) A1   2.) C1   3.) D2   4.) A5   5.) C5   6.) D4  

 6

     A   B   C   D   E   F   G   H  

 1 |   |   |   |   |   |   |   |   |
    --- --- --- --- --- --- --- --- 
 2 |   |   | 2 |   | 3 |   |   |   |
    --- --- --- --- --- --- --- --- 
 3 |   | 1 |   |   |   | 4 |   |   |
    --- --- --- --- --- --- --- --- 
 4 |   |   |   | k |   |   |   |   |
    --- --- --- --- --- --- --- --- 
 5 |   | 5 |   |   |   | 8 |   |   |
    --- --- --- --- --- --- --- --- 
 6 |   |   | 6 |   | 7 |   |   |   |
    --- --- --- --- --- --- --- --- 
 7 |   |   |   |   |   |   |   |   |
    --- --- --- --- --- --- --- --- 
 8 |   |   |   |   |   |   |   |   |
    --- --- --- --- --- --- --- --- 

 Where would you like to move (0 to quit)?

 1.) B3   2.) C2   3.) E2   4.) F3   5.) B5   6.) C6   7.) E6   8.) F5  

 7

     A   B   C   D   E   F   G   H  

 1 |   |   |   |   |   |   |   |   |
    --- --- --- --- --- --- --- --- 
 2 |   |   |   |   |   |   |   |   |
    --- --- --- --- --- --- --- --- 
 3 |   |   |   |   |   |   |   |   |
    --- --- --- --- --- --- --- --- 
 4 |   |   |   | 2 |   | 3 |   |   |
    --- --- --- --- --- --- --- --- 
 5 |   |   | 1 |   |   |   | 4 |   |
    --- --- --- --- --- --- --- --- 
 6 |   |   |   |   | k |   |   |   |
    --- --- --- --- --- --- --- --- 
 7 |   |   | 5 |   |   |   | 8 |   |
    --- --- --- --- --- --- --- --- 
 8 |   |   |   | 6 |   | 7 |   |   |
    --- --- --- --- --- --- --- --- 

 Where would you like to move (0 to quit)?

 1.) C5   2.) D4   3.) F4   4.) G5   5.) C7   6.) D8   7.) F8   8.) G7  

 6

     A   B   C   D   E   F   G   H  

 1 |   |   |   |   |   |   |   |   |
    --- --- --- --- --- --- --- --- 
 2 |   |   |   |   |   |   |   |   |
    --- --- --- --- --- --- --- --- 
 3 |   |   |   |   |   |   |   |   |
    --- --- --- --- --- --- --- --- 
 4 |   |   |   |   |   |   |   |   |
    --- --- --- --- --- --- --- --- 
 5 |   |   |   |   |   |   |   |   |
    --- --- --- --- --- --- --- --- 
 6 |   |   | 2 |   | 3 |   |   |   |
    --- --- --- --- --- --- --- --- 
 7 |   | 1 |   |   |   | 4 |   |   |
    --- --- --- --- --- --- --- --- 
 8 |   |   |   | k |   |   |   |   |
    --- --- --- --- --- --- --- --- 

 Where would you like to move (0 to quit)?

 1.) B7   2.) C6   3.) E6   4.) F7  

 0

 Thanks for using my knight program!


*/
