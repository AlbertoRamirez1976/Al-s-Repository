/**
 * Account Tester class
 *
 * @author Alberto E Ramirez
 * @version 11-2-2021
 */
public class AccountTester 
{
   public static void main()
   {
       BankAccount account = new BasicAccount(100.0);
       System.out.println("If the initial balance is:$" + account.getBalance());
       System.out.println();// blank line
       
       System.out.println("If you withdraw $80.00");
       account.withdraw(80.00);
       System.out.println("The new balance would be: $" + account.getBalance());
       System.out.println();// blank line
      
       System.out.println("If you withdraw $50.00");
       account.withdraw(50.00);
       System.out.println("The new balance would be: $" + account.getBalance());
       System.out.println();// blank line
      
       System.out.println("If you withdraw $50.00");
       account.withdraw(50.00);
       System.out.println("The new balance would be: $" + account.getBalance()+ ",which includes a $30 overdraft penalty fee");
   }
}