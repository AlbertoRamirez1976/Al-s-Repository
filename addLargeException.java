/****************************************************/
/* Name : Alberto Ramirez                           */
/* Palomar Student ID : 006095053                   */
/* CSCI 210  Lab 1				                            */	
/* Date: 9/18/21                                    */
/* The purpose is to use the dynamic implementation */
/* of a stack. This Java application will add       */
/* large numbers			                            */ 
/****************************************************/

public class addLargeException extends RuntimeException
{
    public addLargeException()
    {
        super();    
    }

    public addLargeException(String message)
    {
        super(message);    
    }
}
