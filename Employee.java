/**
 * Employee class
 *
 * @author Alberto E Ramirez
 * @version 11-2-2021
 */
public class Employee 
{
  
  private String name;
  private double baseSalary;
  
  public Employee()
  {
    this.name="";
    this.baseSalary=0;
  }
  
   public Employee(String name, double salary)
  {
    this.name=name;
    this.baseSalary=salary;
  }
   
  public void setName(String newName)
  {
    this.name = newName;
  }
  
  public void setBaseSalary(double newSalary)
  {
    this.baseSalary = newSalary;
  }
  
  public String getName()
  {
    return this.name;
  }
  
  public double getSalary()
  {
    return this.baseSalary;
  }
}