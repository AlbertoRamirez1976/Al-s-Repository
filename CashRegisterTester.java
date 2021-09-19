/**
 * Cash Register class will count the purchased items
 *
 * @author Alberto E Ramirez
 * @version 9-18-21
 */
public class CashRegisterTester
{
    public static void main()
    {
        CashRegister register = new CashRegister(5);

        register.recordPurchase(29.50);
        register.recordPurchase(9.25);
        register.recordPurchase(3.28);
        register.receivePayment(50);

        // Banner message
        System.out.println("Welcome to the Cash Register program");
        
        System.out.println();// blank line
        
        System.out.println("The purchases are as follows: $29.50, $9.25, and $3.28");
        
        System.out.println();// blank line
        
        System.out.print("The total sales amount is: $");
        System.out.println(register.getSalesTotal());

        System.out.println();// blank line
        
        System.out.print("The total item count is: ");
        System.out.println(register.getItemCount());
    }
}
