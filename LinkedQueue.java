/**
 * The Circular Array class implements a queue using a circular array 
 * 
 * @author Alberto E. Ramirez
 * @version 10/3/2021
 */

public class LinkedQueue<T> implements QueueInterface<T>
{
    private Item<T> front;
    private Item<T> rear;

    public LinkedQueue()
    {
        front = null;
        rear = null;
    }

    public void insert(T element)
    {
        Item<T> item = new Item<T>(element);

        //queue is empty
        if (isEmpty()) 
        {
            front = item;
            rear = item;
        }
        else if (isFull())
        {
            rear = item;
            front = item;
        }
        //queue is not empty
        else 
        {
            rear.next = item;
            rear = item;
        }
    }

    public T remove() throws QueueUnderflowException
    {
        if (isEmpty())
            throw new QueueOverflowException("Remove attempted on empty queue");
        else {
            T info = front.info;
            front = front.next;
            return info;
        }
    }

   
    
    public Boolean isEmpty()
    {
        return front == null;
    }
    
    public Boolean isFull()
    {
        return rear == null;
    }
}
