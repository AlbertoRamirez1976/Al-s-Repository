/**
 * BankAccount class will supply object classes
 *
 * @author Alberto E Ramirez
 * @version 9-17-21
 */
public class BankAccount
{
   	// instance variable declaration
        private double balance;
	
	// constructor constructs a BankAccount class object with a zero balance
	public BankAccount()
	{
		balance = 0;
	}
	
	// method will deposit money into the bank account
	// @param amount will deposit an amount
	public void deposit(double amount)
	{
		System.out.print("After depositing $" + amount);
		double newBalance = balance + amount;
		System.out.println(", the new balance is $" + newBalance);
		balance = newBalance;
	}
	
	// method will withdraw money into the bank account
	// @param amount will be the amount to withdraw
	public void withdraw(double amount)
	{
		System.out.print("After withdrawing $" + amount);
		double newBalance = balance - amount;
		System.out.println(", the new balance is $" + newBalance);
		balance = newBalance;
	}
	
	// method will acquire the current balance
	// @param return will return the current balance
	public double getBalance()
	{
		return balance;
	}
}