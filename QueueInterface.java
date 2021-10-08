/**
 * The Circular Array class implements a queue using a circular array 
 * 
 * @author Alberto E. Ramirez
 * @version 10/3/2021
 */

// methods within the interface class will consistes of a group of related methods with empty bodies.
public interface QueueInterface<T>
{
    void insert(T element) throws QueueOverflowException;// method insert elements and thrown an exception if full

    T remove() throws QueueUnderflowException;// method remove elements and thrown an exception if empty
    
    Boolean isFull();// method will check for a full value and return a true value if full, otherwise returns false
    
    Boolean isEmpty();// method will check for an empty value and return a true value if empty, otherwise returns false
    
    int size();// returns the number of elements in the queue
}
