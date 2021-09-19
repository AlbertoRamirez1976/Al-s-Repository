/****************************************************/
/* Name : Alberto Ramirez                           */
/* Palomar Student ID : 006095053                   */
/* CSCI 210  Lab 1				                            */	
/* Date: 9/18/21                                    */
/* The purpose is to use the dynamic implementation */
/* of a stack. This Java application will add       */
/* large numbers			                            */ 
/****************************************************/

public class addLargeLinkedStack<T> implements addLargeStackInterface<T>
{
    private addLargeItem<T> top;

    public addLargeLinkedStack()
    {
        top = null;// variable is assigned a null value
    }

    // method will push items into the stack
    public void push(T element)
    {
        addLargeItem<T> item = new addLargeItem<T>(element);

        if (!isEmpty())
            item.setNext(top);

        top = item;// variale represents the top of the stack
    }

    // method will pop items from the stack
    public T pop() throws addLargeException
    {
        if (isEmpty())
            throw new addLargeException("Pop attempted on empty stack");
        else {
            T info = top.info;
            top = top.next;
            return info;
        }
    }

    // method will test for empty value
    public boolean isEmpty()
    {
        return top == null;
    }
}
