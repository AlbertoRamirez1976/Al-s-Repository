/**
 * The Circular Array QueueUnderflowException class invokes its methods if the queue is empty and then extends the Runtime exception class
 * 
 * @author Alberto E. Ramirez
 * @version 10/7/2021
 */

public class QueueUnderflowException extends RuntimeException
{
    // method throws an underflow exception if the queue is empty, otherwise it removes the front element and returns it.
    public QueueUnderflowException()
    {
        super("Queue underflow");    
    }

     // method calls on a supeclass constructor which includes a parameter value
    public QueueUnderflowException(String message)
    {
        super(message);    
    }
}
