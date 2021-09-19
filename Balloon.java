/**
 * This Java program incorporates the class Balloon which starts out with a radius of zero. 
 * A method called inflate will simultae inflation and increase the radius of the balloon.
 *
 * @author Alberto E Ramirez
 * @version 9-18-21
 */ 

public class Balloon
{

    // instance variable declaration
    private double radius;// variable will be assigned the value of the radius

    // constructor constructs a class object and initializes it to zero.
    Balloon()
    {
        radius = 0;
    }

    // method will increase the radious of the balloon by a given amount
    // @param amount will increase the radius
    void inflate(double amount)
    {
        radius += amount;// variable radius will be assiigned the value of the amount with the use of an increment oeprator
    }

    // method will compute the current volume of the balloon
    // @return the volume of the balloon
    double getVolume()
    {
        return (4.0 / 3) * Math.PI * (radius * radius * radius);// the method will use the Math class in order to compute the value for PI
    }
}

