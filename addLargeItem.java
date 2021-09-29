/**
 * The addLargeItem class is a generic class that is  * parameterized over a non-primitive type "<T>". All  * occurences of the  * object are replaced by the "<T>" type  * parametr value.  
 * 
 * @author Alberto E. Ramirez
 * @version 9/28/2021
 */

// class will add items
public class addLargeItem<T>
{
    // variable declaration
    protected T info;// variable "item" of the non-primitive     type is declared.
    protected addLargeItem<T> next;

    // method adds items
    public addLargeItem()
    {
        info = null;// variable is assigned a null value
        next = null;// variable is assigned a null value
    }

    public addLargeItem(T info)
    {
        this.info = info;// the "this" keyword is a reference          to the current object.
        next = null;// variable is assigned a null value
    }

    public void setNext(addLargeItem<T> i)
    {
        next = i;// variable is assigned the value of i
    }
}
