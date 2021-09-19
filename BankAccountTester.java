/**
 * BankAccountTester class will contruct a bank account, deposit $1000, withdraw $500, withdarws another $400, 
 * and then prints the remaining balance.
 *
 * @author Alberto E Ramirez
 * @version 9-17-21
 */

public class BankAccountTester
{
    public static void main()
    {
        BankAccount account = new BankAccount();

        // banner message
        System.out.println("Welcome to the Bank Account program");
        
        System.out.println();// blank line
        
        System.out.println("The initial deposit amount is $1,000.00 ");
        
        System.out.println();// blank line
        
        account.deposit(1000);// account will call on deposit method in order to deposit $1,000
        
        System.out.println();// blank line
        
        account.withdraw(500);// account will call on withdraw method in order to withdraw $500
        
        System.out.println();// blank line
        
        account.withdraw(400);// account will call on withdraw method in order to withdraw $400

        System.out.println();// blank line
        
        System.out.print("The current balance is: $");// Banner message
        
        System.out.println(account.getBalance());// account calls on the getBalance method in order to acquire the final balance
        
        System.out.println();// blank line
        
        System.out.println("The expected balance is: $100.00");// final balance is displayed
    }
}
