/**
 * The Circular Array class implements a queue using a circular array 
 * 
 * @author Alberto E. Ramirez
 * @version 10/3/2021
 */

public class ArrayQueue<T> implements QueueInterface<T>
{
    // defines the default size for the queue 
    public static final int MAX = 10;
    // generic array of elements
    private T elements[];

    // variable declaration
    private int front;// variable will be assigned the value of the front of the queue
    private int rear;// variable will be assigned the value of the rear of the queue
    private int queSize;// variable will be assigned the value of the size of the queue

    public ArrayQueue()
    {
        elements = (T[]) new Object[MAX];

        front = MAX - 3;
        rear = MAX - 3;
    }

    public void insert(T element) 
    {
        //Check if size is same as max capacity of queue if yes then throw QueueOverflowException
        if(queSize == MAX) 
        {
            throw new QueueOverflowException("Queue is full");
        }
        //incrementing the size
        queSize++;
        //inserting element at rear
        elements[rear] = element;
        //incrementing rear position
        rear = (rear+1) % MAX;
    }

    public T remove() throws QueueUnderflowException 
    {
        //If size is 0 then throw QueueUnderflowException before removing element from queue
        if(queSize == 0) 
        {
            throw new QueueUnderflowException("Queue is empty");
        }
        //decrementing size of the queue on remove
        queSize--;
        //getting element in front before remove
        T data = elements[front];
        //Setting front element to null
        elements[front] = null;
        //setting front to next element in queue
        front = (front+1) % MAX;
        return data;

    }
    public Boolean isEmpty()
    {
        return front == 0;
    }

}