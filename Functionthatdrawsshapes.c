/* Title: Function that draws shapes                */
/* Author: Alberto E. Ramirez                       */
/* Date: 1/7/2021                                   */
/* Program draws rocket ship, and stick figures     */

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>         /* Preprocessor directive for standard inputs and outputs */


/* Function prototypes */
void draw_Triangle(void);                     /* Draws a triangle */
void draw_Rectangle(void);                   /* Draws a rectangle */
void draw_Intersect(void);                  /* Draws intersecting lines */
void draw_TriangleBase(void);              /* Draws a triangle base */
void draw_RocketBase(void);               /* Draws a rocket base*/
void draw_Base(void);                    /* Draw a base line */
void draw_Vertical(void);               /* Draws vertical line */
void draw_Circle(void);                /* Draws circle */
void draw_Rocket(void);               /* Draws a rocket */
void draw_MaleStickFigure(void);   /* Draws a male stickfigure */
void draw_FemaleStickFigure(void);   /* Draws a female stickfigure */


int main(void)
{
				
	printf("\n");      /* draws one blank line in order to center the diagrams on the screen */
	draw_Rocket();    /* calls the function draw rocket */

	printf("\n\n");               /* draws one blank line in order to center the diagrams on the screen */
	draw_MaleStickFigure();    /* calls the function draw a male stickfigure */

	printf("\n\n");                 /* draws one blank line in order to center the diagrams on the screen */
	draw_FemaleStickFigure();    /* calls the function draw a female stickfigure */

	getchar();
	getchar();

	return (0); /* End of function main  */

}

void draw_Intersect(void) /* Draws intersecting lines for the triangle */
{
	printf("           /\\     \n");
	printf("          /  \\     \n");
	printf("         /    \\    \n");
	printf("        /      \\   \n");
	printf("       /        \\  \n");
	printf("      /          \\ \n");

}

void draw_TriangleBase(void) /* Draws base line for the triangle */
{
	printf("     --------------\n");


}

void draw_Base(void) /* Draws base line */
{
	printf("     --------------\n");


}

void draw_RocketBase(void) /* Draws base line for the triangle */
{
	printf("   ------------------\n");
	printf("  /                  \\\n");
	printf(" /                    \\\n");

}



void draw_Triangle(void) /* Draws a triangle by calling the other sub functions of draw_Intersect and draw_Base */
{
	draw_Intersect();
	draw_TriangleBase();

}

void draw_Rectangle(void)
{
	printf("   ------------------\n");
	printf("   |                |\n");
	printf("   |                |\n");
	printf("   ------------------\n");
}


void draw_Vertical(void)
{

	printf("   |                |\n");
	printf("   |                |\n");

}

void draw_Circle(void) /* Draws base line for the triangle */
{
	printf("            *          \n");
	printf("          *   *        \n");
	printf("           * *         \n");
}

void draw_Rocket(void)
{
	draw_Triangle();
	draw_Rectangle();
	draw_Vertical();
	draw_Vertical();
	draw_Vertical();
	draw_RocketBase();

}

void draw_MaleStickFigure(void)
{
	draw_Circle();
	draw_Rectangle(); 
	draw_RocketBase();


}

void draw_FemaleStickFigure(void)
{
	draw_Circle();
	draw_Triangle();
	draw_RocketBase();

	
}

