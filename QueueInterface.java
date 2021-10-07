/**
 * The Circular Array class implements a queue using a circular array 
 * 
 * @author Alberto E. Ramirez
 * @version 10/3/2021
 */

public interface QueueInterface<T>
{
    void insert(T element);

    T remove() throws QueueUnderflowException;

    Boolean isEmpty();
}
