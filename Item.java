/**
 * The Circular Array class implements a queue using a circular array 
 * 
 * @author Alberto E. Ramirez
 * @version 10/3/2021
 */

public class Item<T>
{
    protected T info;
    protected Item<T> next;

    public Item()
    {
        info = null;
        next = null;
    }

    public Item(T info)
    {
        this.info = info;
        next = null;
    }
}