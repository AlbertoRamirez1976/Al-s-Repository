/****************************************************/
/* Name : Alberto Ramirez                           */
/* Palomar Student ID : 006095053                   */
/* CSCI 210  Lab 1				                            */	
/* Date: 9/12/21                                    */
/* The purpose is to use the dynamic implementation */
/* of a stack. This Java application will add       */
/* large numbers			                            */ 
/****************************************************/

public interface addLargeStackInterface<T>
{
    void push(T element);

    T pop() throws addLargeException;

    boolean isEmpty();
}
