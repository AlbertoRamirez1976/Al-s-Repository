/****************************************************/
/* Name : Alberto Ramirez                           */
/* Palomar Student ID : 006095053                   */
/* CSCI 210  Lab 1				                            */	
/* Date: 9/12/21                                    */
/* The purpose is to use the dynamic implementation */
/* of a stack. This Java application will add       */
/* large numbers			                            */ 
/****************************************************/

public class addLargeItem<T>
{
    protected T info;
    protected addLargeItem<T> next;

    public addLargeItem()
    {
        info = null;
        next = null;
    }

    public addLargeItem(T info)
    {
        this.info = info;
        next = null;
    }

    public void setNext(addLargeItem<T> i)
    {
        next = i;
    }
}
