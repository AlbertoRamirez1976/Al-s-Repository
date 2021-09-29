/**
 * The addLargeException class is a custom exception that extends the  * Java RuntimeException class. The Java RuntimeException is  * the superclass of those exceptions that can be thrown during
 * the normal operation of the Java Virtual Machine. Extending  * the RuntimeException avoids the need to declare it in the  * throws clause.  
 * 
 * @author Alberto E. Ramirez
 * @version 9/28/2021
 */

public class addLargeException extends RuntimeException
{
    public addLargeException()
    {
        super();    
    }

    public addLargeException(String message)
    {
        super(message);// detailed message    
    }
}
