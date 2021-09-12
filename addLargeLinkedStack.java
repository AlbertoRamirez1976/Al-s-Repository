/****************************************************/
/* Name : Alberto Ramirez                           */
/* Palomar Student ID : 006095053                   */
/* CSCI 210  Lab 1				                            */	
/* Date: 9/12/21                                    */
/* The purpose is to use the dynamic implementation */
/* of a stack. This Java application will add       */
/* large numbers			                            */ 
/****************************************************/

public class addLargeLinkedStack<T> 
{
    private addLargeItem<T> top;

    public addLargeLinkedStack()
    {
        top = null;
    }

    public void push(T element)
    {
        addLargeItem<T> item = new addLargeItem<T>(element);

        if (!isEmpty())
            item.setNext(top);

        top = item;
    }

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

    public boolean isEmpty()
    {
        return top == null;
    }
}
