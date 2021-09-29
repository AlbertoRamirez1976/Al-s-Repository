/**
 * The addLargeTester class will serve as a test class that  * will run tests on the "addLarge" package.
 * 
 * @author Alberto E. Ramirez
 * @version 9/28/2021
 */

import java.util.*;// Java utility package is a collection framework of miscellaneous class.

public class addLargeTester
{

    public static void main()
    {
        // variable declaration
        String first = "2147483647";// String variable will be assigned the value "2147483647" and will represent the first stack
        String second = "2147483647";// String variable will be assigned the value "2147483647" and will represent the second stack

        // the Stack class represents a last-in-first-out (LIFO) stack of objects
        Stack<Integer> stack1 = new Stack<>();// constructs an empty stack 
        Stack<Integer> stack2 = new Stack<>();// constructs an empty stack 

        // method declaration
        int len1 = first.length();// variable "len1" will be assigned the value of the length() method which returns the number of     characters from the String variable "first", which should be 10.

        int len2 = second.length();// variable "len2" will be assigned the value of the length() method which returns the number of         characters from the String variable "second", which should be 10.

        // variable value reassignment
        int duplen1 = len1;// the value of the variable "duplen1" will be determined by the assigned value from variable "len1", which     should be 10.
        int duplen2 = len2;// the value of the variable "duplen2" will be determined by the assigned value from variable "len2", which         should be 10.

        // while loop will create iterations while the condition is boolean value remains true. The function of this while loop will     call on the push method in order to push digits from numbers into the appropriate stack variable and order.
        while(len1>0 || len2>0)
        {
            if(len1>0)
            {
                stack1.push(first.charAt(duplen1-len1)-'0');// stack object calls on the push method
                len1--;// decrement operator is applied to the "len1" variable 
            }
            if(len2>0){
                stack2.push(second.charAt(duplen2-len2)-'0');// stack object calls on the push method
                len2--;// decrement operator is applied to the "len2" variable
            }
        }// end of while loop

        String res = "";// String variable "res" will be assigned an empty value

        int carry = 0;// variable declaration of the carry variable which is initialized to a zero value

        // while loop will create iterations while the condition is boolean value remains true. The function of this while loop will         pop digits from the stack and add. It will also seperate the tens part and carry it over to the next iteration
        while(!stack1.isEmpty() || !stack2.isEmpty()){
            int firstDigit = (stack1.isEmpty())?0:stack1.pop();
            int secondDigit = (stack2.isEmpty())?0:stack2.pop();
            if(carry+firstDigit+secondDigit >= 10){
                res = (carry+firstDigit+secondDigit-10)+res;
                carry = 1;
            }// end of if statement
            else
            {
                res = (carry+firstDigit+secondDigit)+res;
                carry = 0;
            }// end of else statement
        }// end of while loop

        // if statement will test value
        if(carry==1)
        {
            res = 1+res;
        }// end of if statement

        // final display of the sum of numbers
        System.out.println("The sum of the numbers is: "+ first +" + "+ second +" = "+ res);
    }

}// end of main