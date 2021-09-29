/**
 * The addLargeItemLinkedStack<T> class represents a last-in- * first-out (LIFO) stack of generic items. The implementation  * uses a singly linked list with a non-static nested class for  * linked-list nodes. 
 * 
 * @author Alberto E. Ramirez
 * @version 9/28/2021
 */

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

        top = item;// variable represents the top of the stack
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
