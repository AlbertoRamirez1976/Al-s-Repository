/****************************************************/
/* Name : Alberto Ramirez                           */
/* Palomar Student ID : 006095053                   */
/* CSCI 210  Lab 1				                            */	
/* Date: 9/18/21                                    */
/* The purpose is to use the dynamic implementation */
/* of a stack. This Java application will add       */
/* large numbers			                            */ 
/****************************************************/

// class will add items
public class addLargeItem<T>
{
    // variable declaration
    protected T info;
    protected addLargeItem<T> next;

    // method adds items
    public addLargeItem()
    {
        info = null;// variable is assigned a null value
        next = null;// variable is assigned a null value
    }

    public addLargeItem(T info)
    {
        this.info = info;
        next = null;// variable is assigned a null value
    }

    public void setNext(addLargeItem<T> i)
    {
        next = i;// varibale is assigned the value of i
    }
}
