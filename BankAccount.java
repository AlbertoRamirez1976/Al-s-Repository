/**
 * Bank Account class
 *
 * @author Alberto E Ramirez
 * @version 11-2-2021
 */
public class BankAccount 
{
   // variable declaration to protected in order to allow access by child class
   protected double balance;
  
   public BankAccount()
   {
       balance = 0;
   }
  
   public BankAccount(double initialBalance)
   {
       balance = initialBalance;
   }
  
   public void deposit(double amount)
   {
       double newBalance = balance + amount;
       balance = newBalance;
   }
  
   public void withdraw(double amount)
   {
       double newBalance = balance - amount;
       balance = newBalance;
   }
  
   public double getBalance()
   {
       return balance;
   }
}