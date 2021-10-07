/**
 * The Circular Array class implements a queue using a circular array 
 * 
 * @author Alberto E. Ramirez
 * @version 10/3/2021
 */

public class QueueUnderflowException extends RuntimeException
{
    public QueueUnderflowException()
    {
        super();    
    }

    public QueueUnderflowException(String message)
    {
        super(message);    
    }
}
