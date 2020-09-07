#include<stdio.h>

int main()
{
     //Declaration
     int circle_radius;
     float PI=3.14159, circle_diameter, circle_area, circle_circumf;
     char name[15];

     //Opening statement
     printf("Hello, welcome to my third lab!\n");

     //Introduction
     printf("What is your name? ");
     gets(name);
     printf("\n");

     //Follow-up statement

     printf("It is nice to meet you %s...\n", name);
     printf("\n");


     //Input from the user for the circle's radius
     printf("Let's get started by entering the radius of a circle: \n"); //prompt
     scanf("%d", &circle_radius); //read/store the input for the circle's radius

     printf("\n");

     //Processing
      //Calculations for the circle's diameter
     circle_diameter = 2 * circle_radius;
     //Calculations for the circle's area
     circle_area = PI * circle_radius * circle_radius;
     //Calculations for the circle's circumference
     circle_circumf = 2 * PI * circle_radius;

     //Output
     printf("%s, The radius of your circle is: %d\n", name, circle_radius);
     printf("The diameter of your circle is: %5.5f\n", circle_diameter);
     printf("The area of your circle is: %5.5f\n", circle_area);
     printf("The circumference of your circle is: %5.5f\n", circle_circumf);
     printf("\n");

     //Closing statement

     printf("%s, I hope that you enjoyed my third program...you take care!\n", name);

     return 0;

} //end function main

/*

Test Run 1

Hello, welcome to my third lab!
What is your name? Alex

It is nice to meet you Alex...

Let's get started by entering the radius of a circle:
5

Alex, The radius of your circle is: 5
The diameter of your circle is: 10.00000
The area of your circle is: 78.53975
The circumference of your circle is: 31.41590

Alex, I hope that you enjoyed my third program...you take care!

Test Run 2

Hello, welcome to my third lab!
What is your name? Leslie

It is nice to meet you Leslie...

Let's get started by entering the radius of a circle:
6

Leslie, The radius of your circle is: 6
The diameter of your circle is: 12.00000
The area of your circle is: 113.09724
The circumference of your circle is: 37.69908

Leslie, I hope that you enjoyed my third program...you take care!

Test Run 3

Hello, welcome to my third lab!
What is your name? John

It is nice to meet you John...

Let's get started by entering the radius of a circle:
7

John, The radius of your circle is: 7
The diameter of your circle is: 14.00000
The area of your circle is: 153.93791
The circumference of your circle is: 43.98226

John, I hope that you enjoyed my third program...you take care!

Test Run 4

Hello, welcome to my third lab!
What is your name? Vanessa

It is nice to meet you Vanessa...

Let's get started by entering the radius of a circle:
8

Vanessa, The radius of your circle is: 8
The diameter of your circle is: 16.00000
The area of your circle is: 201.06177
The circumference of your circle is: 50.26544

Vanessa, I hope that you enjoyed my third program...you take care!


Test Run 5

Hello, welcome to my third lab!
What is your name? Tony

It is nice to meet you Tony...

Let's get started by entering the radius of a circle:
9

Tony, The radius of your circle is: 9
The diameter of your circle is: 18.00000
The area of your circle is: 254.46880
The circumference of your circle is: 56.54862

Tony, I hope that you enjoyed my third program...you take care!

*/


