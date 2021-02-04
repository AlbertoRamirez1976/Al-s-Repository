/***********************************************/
/* Lab 1 Question 4                            */
/* Name : Alberto Ramirez                      */
/* Student ID : 1186065                        */
/* Date: 2/3/21                                */
/* This Program finds the diameter, area, and  */
/* circumference of a circle                   */
/*                                             */
/***********************************************/

#include<stdio.h>

int main()
{
     //Declaration
     int circle_radius;
     float PI=3.14159, circle_diameter, circle_area, circle_circumf;

     //Data/input
     printf("Enter the radius of a circle: ");
     scanf("%d", &circle_radius);
     printf("\n");

     //Processing/Calculations
     circle_diameter = 2 * circle_radius;/*Calculation for diameter*/
     circle_area = PI * circle_radius * circle_radius;/*Calculation for area*/
     circle_circumf = 2 * PI * circle_radius;/*Calculation for circumference*/

     //Output
     printf("The radius of the circle is: %d\n", circle_radius);
     printf("The diameter of the circle is: %5.5f\n", circle_diameter);
     printf("The area of the circle is: %5.5f\n", circle_area);
     printf("The circumference is: %5.5f\n", circle_circumf);
     printf("\n");

     return 0;

}

//Output
//
//Test Run 1
//
//Enter the radius of a circle: 5
//
//The radius of the circle is: 5
//The diameter of the circle is: 10.00000
//The area of the circle is: 78.53975
//The circumference is: 31.41590

//Test Run 2
//
//Enter the radius of a circle: 6
//
//The radius of the circle is: 6
//The diameter of the circle is: 12.00000
//The area of the circle is: 113.09724
//The circumference is: 37.69908

//Test Run 3
//
//Enter the radius of a circle: 7
//
//The radius of the circle is: 7
//The diameter of the circle is: 14.00000
//The area of the circle is: 153.93791
//The circumference is: 43.98226

//Test Run 4
//
//Enter the radius of a circle: 8
//
//The radius of the circle is: 8
//The diameter of the circle is: 16.00000
//The area of the circle is: 201.06177
//The circumference is: 50.26544

//Test Run 5
//
//Enter the radius of a circle: 12
//
//The radius of the circle is: 12
//The diameter of the circle is: 24.00000
//The area of the circle is: 452.38898
//The circumference is: 75.39816


