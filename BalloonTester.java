/**
 * This Java program will test the class Balloon which starts out with a radius of zero. 
 * A method called inflate will simultae inflation and increase the radius of the balloon.
 *
 * @author Alberto E Ramirez
 * @version 9-18-21
 */ 

public class BalloonTester
{
    public static void main()
    {
        Balloon balloon = new Balloon();

        balloon.inflate(5);// ballon object will call the inflate method and increase the value by the parameter value of 5
        balloon.inflate(2);// ballon object will call the inflate method and increase the value by the parameter value of 2

        // banner message
        System.out.println("Welcome to the Ballon Volume program");
        
        System.out.println();// blank line
        
        // banner message
        System.out.println("The starting radius is zero.");
        
        System.out.println();// blank line
        
        System.out.println("The value of PI will be multiplied three times,resulting in ");// blank line
                
        // ballon object will call the getVolume method in order to acquire the final value with a prevcision of two decimal places
        String currentVolume = String.format("the current volume of: %,.2f",balloon.getVolume());
                
        // final output of the volume
        System.out.println(currentVolume);
    }
}
