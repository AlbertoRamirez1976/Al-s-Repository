/**
 * Basic Account class
 *
 * @author Alberto E Ramirez
 * @version 11-2-2021
 */
public class BasicAccount extends BankAccount
{
   // the constructor will initialize the basic account balance
   public BasicAccount(double initialBalance)
   {
       // a call to the super class constructor
       super(initialBalance);  
   }
  
   // withdraw method 
   public void withdraw(double amount)
   {
       
       double newBalance = getBalance() - amount;
       if(newBalance < 0)
       {
           //penalty of $30 is charged for each withdraw that results in an overdraft
           newBalance -= 30;
       }
      
       //balance is updated to reflect the new balance after the overdraft fee
       balance = newBalance;
   }
}