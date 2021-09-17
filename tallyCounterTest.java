/**
 * This Java program will test the tallyCounter class
 * @author Alberto E. Ramirez
 * @version 9-14-21
 */

import java.util.*;

public class tallyCounterTest 
{
   public static void main()
   {
        // new class object is created
        tallyCounter tally = new tallyCounter();
        
        System.out.println("Welcome to the Tally Counter Program");
        
        System.out.println();// blank line
         
        Scanner sc = new Scanner(System.in);
        
        // prompt will ask the user for the limit value to set for the function
        System.out.print("Please enter the number of personnel: ");
        
        // variable declaration and initialization to the input value entered by the user
        int num = sc.nextInt();
        
        System.out.println();// blank line
        
        // output of the user limit value
        System.out.println("You entered: " + num);
        
        System.out.println();// blank line
        
        // setLimit method will accept the input parameter value of the variable num which is the value set by the user input
        tally.setLimit(num);// limit is set with a call to the setLimit function
        
        tally.click();
        tally.click();
        tally.click();
        tally.click();
        
        tally.click();   
        
        int finalResult = tally.getValue(); // final result is set to the value
        
        // final output
        System.out.println("The limit is: " + finalResult);
}
}
