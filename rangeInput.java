/**
 * This Java program allows users to enter a value
 * within a range of values that is provided in the constructor
 *
 * @author Alberto E Ramirez
 * @version 9-16-21
 */

import java.util.*;

public class rangeInput
{
    // instance variable declaration
    private int lowerRange; // variable will be assigned the value of the lower temperature range
    private int upperRange; // variable will be assigned the value of the upper temperature range
    private int inputValue; // variable will be assigned the average value between the lower and upper temperature range

    // Constructor
    public rangeInput(int lowerRange, int upperRange)
    {
        this.lowerRange = lowerRange;
        this.upperRange = upperRange;
        this.inputValue = (upperRange - lowerRange) / 2;
        
    }
    
    // method will simulate the function of the temp control button being turned up
    public void upButton()
    {
       this.inputValue = Math.min (upperRange, inputValue + 1);   
    }

    // method will simulate the function of the temp control button being turned down
    public void downButton()
    {
       this.inputValue = Math.max (lowerRange, inputValue - 1);
    }
    
    // method will acquire the input value
    public int getValue()
    {
       return inputValue;
    }

    public static void main()
    {
        rangeInput input = new rangeInput(0, 120);// range of inputs simulate a temperature range of between 0 degrees to 120 degrees
        
        System.out.println("The initial temperature value is: " + input.getValue());
        
        System.out.println();// blank line
           
        System.out.println("The temperature value after turning up the temp control by three values: ");
        
        System.out.println();// blank line
        
        input.upButton();
        input.upButton();
        input.upButton();
        
        System.out.println("The new temperature is: " + input.getValue());
        
        System.out.println();// blank line
        
        System.out.println("The temperature value after turning down the temp control by two values: ");
        
        input.downButton();
        input.downButton();
        
        System.out.println();// blank line
         
        System.out.println("The final temperature value is: " + input.getValue());
           
        
    }
    
   
}
