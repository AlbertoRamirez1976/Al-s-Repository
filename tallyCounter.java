/**
 * This Java program simulates a tally counter class
 * that will admit a limited number of people.
 *
 * @author Alberto E Ramirez
 * @version 9-14-21
 */

public class tallyCounter
{
    // instance variable declaration
    private int value;
    private int maxValue;

    // Constructor
    public tallyCounter()
    {
        value = 0; // constructor will be initialized to a zero value to start
    }
    
    // counter object is created
    public tallyCounter(int count)
    {
        value = count; // starting value set to the count variable value
    }
    
    // method will acquire the current value
    public int getValue()
    {
        return value;
    }

    // method will conduct the click function
    public void click()
    {
        value++;
	value = Math.min(value, maxValue);
    }

    // method will undo the click function
    public void unClick()
    {
        value--;
	value = Math.max(value, 0);
    }

    
    // method will reset count to a zero value
    public void reset()
    {
        value = 0;
    }

        
    // method sets the limit
    public void setLimit(int maximum)
    {
        maxValue = maximum;
    }
    
   
}
