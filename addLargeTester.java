/****************************************************/
/* Name : Alberto Ramirez                           */
/* Palomar Student ID : 006095053                   */
/* CSCI 210  Lab 1				                            */	
/* Date: 9/12/21                                    */
/* The purpose is to use the dynamic implementation */
/* of a stack. This Java application will add       */
/* large numbers			                            */ 
/****************************************************/
import java.util.*;

public class addLargeTester extends addLargeLinkedStack implements addLargeStackInterface
{

public static void main()
{
        String first = "2147483647";
        String second = "2147483647";
        
        Stack<Integer> stack1 = new Stack<>();
        Stack<Integer> stack2 = new Stack<>();
        
        int len1 = first.length();
        int len2 = second.length();
        
        int duplen1 = len1;
        int duplen2 = len2;
        while(len1>0 || len2>0)
	{
                if(len1>0)
		{
                        stack1.push(first.charAt(duplen1-len1)-'0');
                        len1--;
                }
                if(len2>0){
                        stack2.push(second.charAt(duplen2-len2)-'0');
                        len2--;
                }
        }
        
        String res = "";
        
        int carry = 0;
        while(!stack1.isEmpty() || !stack2.isEmpty()){
                int firstDigit = (stack1.isEmpty())?0:stack1.pop();
                int secondDigit = (stack2.isEmpty())?0:stack2.pop();
                if(carry+firstDigit+secondDigit >= 10){
                        res = (carry+firstDigit+secondDigit-10)+res;
                        carry = 1;
                }
                else{
                        res = (carry+firstDigit+secondDigit)+res;
                        carry = 0;
                }
        }
        if(carry==1){
                res = 1+res;
        }
        
        System.out.println("The sum of the numbers is: "+ first +" and "+ second +" = "+ res);
}
}