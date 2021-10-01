/**
 * Java program prompts the user for two integers and then 
 * prints the sum, difference, product, average, distance, max  * and min.
 *
 * @author Alberto E Ramirez
 * @version 9/29/2021
 */

import java.util.Random;

class twoIntegers
{
    public static void main() 
    {
        // Random object in created between the range of -5 to +5 inclusive. 
        Random ran = new Random();

        // variable declaration
        int num1;// variable num1 declared as an int type and it will be assigned the value of the user's first input value 
        int num2;// variable num1 declared as an int type and it will be assigned the value of the user's first input value 
        //int result1;// variable will be assigned the final result of the random calculation of num1
        //int result2;// variable will be assigned the final result of  the random calculation of num2
        // banner message
        System.out.println("Welcome the the Basic Math program ");

        System.out.println();// blank line

        // random function will return numbers between -5 and +5
        int result1 = num1 = ran.nextInt(5);

        int result2 = num2 = ran.nextInt(5);
        
        // final output will perform calculation with the help of the two int variables (num1 and num2)
        for (int i = 1; i <= 10; i++)
        {
            System.out.println("The sum is = " + (ran.nextInt(result1 + result2)));
            System.out.println("The difference is = " + ((result1 - result2)));
            System.out.println("The product is = " + (ran.nextInt(result1 * result2)));
            System.out.println("The absolute value is = " + Math.abs(result1) + Math.abs(result2));
            System.out.println("The maximum value is = " + Math.max(result1, result2));
            System.out.println("The minimum value is = " + Math.min(result1, result2));

            System.out.println();// blank line
        }

    }
}