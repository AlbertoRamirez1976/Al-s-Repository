/* Title: Triangle and Rectangle Functions     */
/* Author: Alberto E. Ramirez                  */
/* Date: 1/7/2021                              */
/* Program to draw triangle and rectangle      */

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>     /* Preprocessor directive for standard inputs and outputs */

/* Function prototypes */
void draw_Triangle(void);      /* Draws a triangle */
void draw_Rectangle(void);    /* Draws a rectangle */
void draw_Intersect(void);   /* Draws intersecting lines */
void draw_Base(void);       /* Draws a base line */



int main(void)
{
	printf("\n");      /* draws one blank line in order to center the diagrams on the screen */
	draw_Triangle();   /* calls the function draw triangle */
	draw_Rectangle();  /* calls the function draw triangle */
	draw_Intersect();  /* calls the function draw intersecting lines */
	printf("\n\n");    /* draws two blank lines */
	drawTriangle();    /* calls the function draw triangle */
	drawRectangle();   /* calls the function draw triangle */
	draw_Intersect();  /* calls the function draw intersecting lines */


	getchar();
	getchar();

	return (0); /* End of function main  */

}

void draw_Intersect(void) /* Draws intersecting lines for the triangle */
{
	printf("           /\\     \n");
	printf("          /  \\    \n");
	printf("         /    \\   \n");
	printf("        /      \\  \n");
	printf("       /        \\ \n");
	
}

void draw_Base(void) /* Draws base line for the triangle */
{
	printf("     ----------------\n");
	
}

void draw_Triangle(void) /* Draws a triangle by calling the other sub functions of draw_Intersect and draw_Base */
{
	draw_Intersect();
	draw_Base();

}

void drawRectangle(void)
{
	printf("   ------------------\n");
	printf("   |                |\n");
	printf("   |                |\n");
	printf("   ------------------\n");
}


