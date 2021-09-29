/**
 * The addLargeStackInterface<T> interface is a group of  * related methods with an empty body. The compiler will  * require that the identified methods be implemented in a more  * formal manner.Compilation will fail if the identified  * methods are missing.
 * 
 * @author Alberto E. Ramirez
 * @version 9/28/2021
 */

public interface addLargeStackInterface<T>
{
    void push(T element);// push method call with generic type     element parameter.

    T pop() throws addLargeException;// pop method throws an     exception

    boolean isEmpty();// method will test for empty value
}
