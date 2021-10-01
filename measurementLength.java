/**
 * Java program prompts the user for a measurement in meters and then converts it to miles, feet, and inches
 *
 * @author Alberto E Ramirez
 * @version 9/30/2021
 */

import java.util.*;

public class measurementLength
{
    public static void main()
    {
        Scanner sc = new Scanner(System.in);

        // banner message
        System.out.println("Welcome the the Basic Measurement program ");
        System.out.println();// blank line
        
        // variable declaration
        double miles;// variable will be assigned the value of miles
        double feet;// variable will be assigned the value of feet
        double inches;// variable will be assigned the value of inches
        int meter = 0;// variable will be assigned the value of meters from the formula calculations
        
        // for loop will create three iterations while displaying the final values per measurement
        for (int i = 1; i <= 3; i++)
        {
            // prompt for user input
            System.out.print("Please enter the measurements in meters: ");
            meter = sc.nextInt();
            System.out.println();// blank line
            
            // formula conversions
            miles = meter * 0.000621371;// variable will be assigned the value of miles from the multiplication of meters by a constant value
            feet = meter * 3.28084;// variable will be assigned the value of feet from the multiplication of meters by a constant value
            inches = meter * 39.3701;// variable will be assigned the value of inches from the multiplication of meters by a constant value
    
            System.out.println("Your measurement converted to miles is: " + miles);
            System.out.println();// blank line
            System.out.println("Your measurement converted to feet is: " + feet);
            System.out.println();// blank line
            System.out.println("Your measurement converted to inches is: " + inches);
            System.out.println();// blank line
            
        }
        sc.close();
    }
}