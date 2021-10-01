/**
 * Java program prompts the user for the length of a rectangle sides. Then it prints the area, perimeter, and length.
 *
 * @author Alberto E Ramirez
 * @version 9/30/2021
 */

import java.util.Scanner;
import javax.swing.JFrame;
import java.awt.Rectangle;
import javax.swing.JComponent;
import java.awt.Graphics2D;
import java.awt.Graphics;
import java.awt.Color;

public class rectangleSide
{
    public static void main()
    {

        Scanner in = new Scanner(System.in);
        
        //banner message
        System.out.println("Welcome to the Rectangle Program");
        System.out.println();// blank line
        
        // user prompt to enter the length 
        System.out.print("Please enter the length of the rectangle : ");
        double theLength = in.nextInt();
        System.out.println();// blank line
        
        // user prompt to enter the width
        System.out.print("Please enter the width of the rectangle : ");
        double theWidth = in.nextInt();
        System.out.println();// blank line
        
        // calculations/formulas
        double Area = (theLength * theWidth);// area is calculated by multiplying the length by the width
        System.out.print("The area is: ");
        System.out.println(Area);
        System.out.println();// blank line
        
        double Perimeter = ((theLength + theWidth)*2);// perimeter is calculated by multiplying twice the length by the width
        System.out.print("The perimeter is: ");
        System.out.println(Perimeter);
        System.out.println();// blank line
        
        double theDiagonal = Math.sqrt((theLength*theLength)+(theWidth*theWidth));// diagnol is calculated with the help of the Pythagorean formula
        System.out.print("The diagonal value is: ");
        System.out.println(theDiagonal); 
        System.out.println();// blank line
        
        JFrame window = new JFrame();
        window.setTitle("Red Rectangle on Green Background");
        window.setSize(400, 400);
        window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        window.setVisible(true);
        DrawingComponent DC = new DrawingComponent();
        window.add(DC);
        
        in.close();
    }
}

class DrawingComponent extends JComponent
{
    public void paint(Graphics graph0)
    {
        Graphics2D graph = (Graphics2D) graph0;

        graph.setColor(Color.GREEN);
        graph.draw(new Rectangle(150, 150, 150, 150));

        graph.setColor(Color.RED);
        graph.draw(new Rectangle(163, 165, 125, 125)); 
    }
}