/**
 * Employee Tester class will test the Employee class
 *
 * @author Alberto E Ramirez
 * @version 11-2-2021
 */
public class EmployeeTester 
{

    public static void main() 
    {
        
        // the Manager object will call the zero argument constructor
        Manager em1 = new Manager();
        em1.setName("David");
        em1.setBaseSalary(50000);
        em1.setBonus(30000);
        em1.printSelfDetails();
        System.out.println();// blank line
        
        // the Manager object will call the two argument constructor
        Manager em2 = new Manager("John", 20000);
        em2.printSelfDetails();
        System.out.println();// blank line
        
        // the Manager object will call the three argument constructor
        Manager em3= new Manager("Benzman", 70000, 400000);
        em3.printSelfDetails();
        System.out.println();// blank line
        
        // the Employee object will call the zero argument constructor
        Employee emp1= new Employee();
        emp1.setName("Paul");
        emp1.setBaseSalary(30000);
        System.out.println("Name:"+emp1.getName());
        System.out.println("Basic Salary:"+emp1.getSalary());
        System.out.println();// blank line
        
        // the Employee object will call the two argument constructor
        Employee emp2= new Employee("Lewis", 20000);
        System.out.println("Name:"+emp2.getName());
        System.out.println("Basic Salary:"+emp2.getSalary());
        System.out.println();// blank line
        
        
    }
    
}