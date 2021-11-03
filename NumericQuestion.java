/**
 * NumericQuestion class
 *
 * @author Alberto E Ramirez
 * @version 11-2-2021
 */
import java.util.ArrayList;

public class NumericQuestion extends Question
{
    private double tolerance;
    private double answer;
    
    public NumericQuestion(double aTolerance)
    {
        this.tolerance = aTolerance;
    }

    public void setAnswer(double number)
    {
        answer = number;
    }

    public boolean checkAnswer(String response)
    {
        Double userresponse = Double.parseDouble(response);  
        Double difference = userresponse - answer;
        return (tolerance >= Math.abs(difference));
    }
}
