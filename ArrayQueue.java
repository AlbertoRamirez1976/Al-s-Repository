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
    private T elements[];// circular array of queue entries 

    // variable declaration
    private int front;// variable will be assigned the value of the front of the queue
    private int rear;// variable will be assigned the value of the rear of the queue
    private int queSize;// variable will be assigned the value of the number of elements within the queue

    // default constructor
    public ArrayQueue()
    {
        elements = (T[]) new Object[MAX];

        front = MAX - 3;
        rear = MAX - 3;
    }// end of default constructor

    public void insert(T element) throws QueueOverflowException 
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
 
    
    public Boolean isFull()
    {
        return rear == MAX;
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
    
    public int size()
    {
        return queSize;
    }
    
    public String toString()
   {
       String result = "";
       int index = front;

       for (int scan = 0; scan < queSize; scan++)
       {
           result = result+"\n"+ elements[index];
           index = (index + 1) % elements.length;
       }
       return result;
   }

}