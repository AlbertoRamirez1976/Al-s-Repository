/**
 * Java program displays properties of a letter-size sheet of 
 * paper in millimeters.
 *
 * @author Alberto E Ramirez
 * @version 9/29/2021
 */

public class letterSize
{
    public static void main()
    {
        // variable declaration
        double letter_Width = 8.5;// variable letter_Width will be declared as a double type and assigned the value of 8.5
        int letter_Height = 11;// variable letter_Height will be declared as an int type and assigned the value of 11
        final double MM_PER_INCH = 25.4; ;// constant variable MM_PER_INCH will be declared as a double type and assigned the value of 25.4

        // banner message
        System.out.println("Welcome to the Letter Size program");

        System.out.println();// blank line

        // banner message with results
        System.out.println("The width of the sheet of paper in millimeters is: " + (letter_Width * MM_PER_INCH) );
        System.out.println("The height of the sheet of paper in millimeters is: " + (letter_Height * MM_PER_INCH) );

        System.out.println();// blank line

        // final display will perform the Pythagorean formula in order to calculate the diagonal legth of the sheet of paper
        System.out.println("The diagonal length in millimeters is: " + (Math.sqrt((letter_Width * MM_PER_INCH) * (letter_Width * MM_PER_INCH) + (letter_Height * MM_PER_INCH) * (letter_Height * MM_PER_INCH))));

    }
}

