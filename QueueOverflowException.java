/**
 * The Circular Array QueueOverflowException class invokes its methods if the queue is full and then extends the Runtime exception class
 * 
 * @author Alberto E. Ramirez
 * @version 10/7/2021
 */

public class QueueOverflowException extends RuntimeException
{
    // method throws an overflow exception if the queue is full, otherwise it removes the front element and returns it.
    public QueueOverflowException()
    {
        super("Queue overflow");    
    }

     // method calls on a supeclass constructor which includes a parameter value
    public QueueOverflowException(String message)
    {
        super(message);    
    }
}

