/**
 * Manager class extends the Employee class
 *
 * @author Alberto E Ramirez
 * @version 11-2-2021
 */
public class Manager extends Employee
{
    private double bonus;

    // constructor class Manager is a child object and it will call the parent constructor class
    public Manager()
    {
        super();
        this.bonus = 0;
    }

    // constructor class Manager will call two parameters
    public Manager(String name, double salary)
    {
        super(name,salary);
        this.bonus = 0;
    }

    // constructor class Manager will call two parameters and it initializes variable bonus
    public Manager(String name, double salary, double bonus)
    {
        super(name,salary);
        this.bonus = bonus;
    }

    public void setBonus(double bonus)
    {
        this.bonus = bonus;
    }        

    public double getBonus()
    {
        return this.bonus;
    }

    public void printSelfDetails()
    {
        System.out.println("Name:"+this.getName());
        System.out.println("Basic Salary:"+this.getSalary());
        System.out.println("Bonus:"+this.bonus);
    }
}