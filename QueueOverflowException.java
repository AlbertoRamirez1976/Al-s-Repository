/**
 * The Circular Array class implements a queue using a circular array 
 * 
 * @author Alberto E. Ramirez
 * @version 10/3/2021
 */

public class QueueOverflowException extends RuntimeException
{
    public QueueOverflowException()
    {
        super();    
    }

    public QueueOverflowException(String message)
    {
        super(message);    
    }
}

