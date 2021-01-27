/* Title: The Sorting Program */
/* Author: Alberto E. Ramirez */
/* Date: 1/27/2021            */
/* Program that sorts names   */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Constant Definition */
#define STRINGSIZE 30
#define MAXNUMAPPL 50

/* Function Prototypes */
int alpha_first(char* list[], int min_sub, int max_sub);/* Function for alphabetizing */
void select_sort_str(char* list[], int* numbers[], int n);/* Function for sorting */


int main()
{
    /* Variable Definitions */
    char applicants[MAXNUMAPPL][STRINGSIZE];
    int ages[MAXNUMAPPL];

    char* alpha[MAXNUMAPPL];
    int* numeric[MAXNUMAPPL];

    int num_app;
    int i;
    int j;
    char one_char;

    /*Opening Statement */
    printf(" Welcome to the Sorting Program \n");

    /* Input */
    printf("\nPlease enter the number of applicants.\n> ", MAXNUMAPPL);/* Accept user input */
    scanf("%d", &num_app);/* Assigns user input to variable number of applicants */

    /* Conditional Statement */
    for (i = 0; i < num_app; i++)/* Loop will continue to loop while condition is true */
    {
        /* User is prompted for name data */
        scanf("%c", &one_char);
        printf("\nEnter name %d (lastname, firstname): ", i + 1);

        /* Conditional Statement */
        j = 0;
        while ((one_char = (char)getchar()) != '\n' && j < STRINGSIZE)/* Conditional while loop function */
            applicants[i][j++] = one_char;
        applicants[i][j] = '\0';

        /* User is prompted for age data */
        printf("Enter age %d: ", (i + 1));
        scanf("%d", &ages[i]);

        alpha[i] = (char*)malloc(strlen(applicants[i]) * sizeof(char));
        strcpy(alpha[i], applicants[i]);
        numeric[i] = &ages[i];
    }

    /* Displays the orginal list */
    printf("\n\nOriginal list");
    printf("\n---------------------------\n");
    for (i = 0; i < num_app; ++i)
        printf("%-30s%2d\n", applicants[i], ages[i]);

    /* Function call for the sorting function */
    select_sort_str(alpha, numeric, num_app);

    /* Displays the alphabetized list */
    printf("\n\nAlphabetized list");
    printf("\n---------------------------\n");
    for (i = 0; i < num_app; ++i)
        printf("%-30s%2d\n", alpha[i], *numeric[i]);

    
    return 0;
} 

/* Function Definition for alphabetizing function */
int alpha_first(char* list[], int min_sub, int max_sub)
{
    int first, i;

    first = min_sub;
    for (i = min_sub + 1; i <= max_sub; ++i)
        if (strcmp(list[i], list[first]) < 0)
            first = i;

    return (first);
} 

/* Function Definition for sorting function */
void select_sort_str(char* list[], int* numbers[], int n)
{
    int fill, index_of_min;
    char* temp;
    int* tempNum;

    for (fill = 0; fill < n - 1; ++fill)
    {
        /* Call for the alphabetizing function */
        index_of_min = alpha_first(list, fill, n - 1);

        if (index_of_min != fill)
        {
            /* Temp variable is assigmed with sorting results */
            temp = (char*)malloc(strlen(list[fill]) * sizeof(char));
            strcpy(temp, list[index_of_min]);
            strcpy(list[index_of_min], list[fill]);
            strcpy(list[fill], temp);

            /* Temporary variable for age */
            tempNum = numbers[index_of_min];
            numbers[index_of_min] = numbers[fill];
            numbers[fill] = tempNum;
        }
    }
} 