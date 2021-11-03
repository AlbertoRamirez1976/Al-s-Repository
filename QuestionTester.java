/**
 * Question Tester
 *
 * @author Alberto e Ramirez
 * @version 11-2-2021
 */
import java.util.Scanner;

public class QuestionTester
{
    public static void main()
    {
        Scanner in = new Scanner(System.in);

        Question first = new Question();
        first.setText("Who was the inventor of Java?");
        first.setAnswer("James Gosling");

        NumericQuestion second = new NumericQuestion(0.01);
        second.setText("What is the length of a diagonal with a side length of one?");
        second.setAnswer(Math.sqrt(2));

        int score = 0;// variable initialized to zero
        
        score = score + presentQuestion(first, in);
        score = score + presentQuestion(second, in);
        System.out.println("Your score is: " + score);
    }

    // if the response and the expected answer differ by no more than 0.01, accept the response as correct.
    public static int presentQuestion(Question q, Scanner in)
    {
        q.display();
        System.out.println("Your answer is:");
        String response = in.nextLine();
        boolean outcome = q.checkAnswer(response);
        System.out.println(outcome);
        if (outcome)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}