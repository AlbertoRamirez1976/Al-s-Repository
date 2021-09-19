/**
 * Cash Register class will count the purchased items
 *
 * @author Alberto E Ramirez
 * @version 9-18-21
 */
public class CashRegister
{
    // instance variable declaration
    private double taxRate;// variable will be assigned the value of the tax rate
    private double purchase;// variable will be assigned the value of the purchase
    private double taxablePurchase;// variable will be assigned the value of the taxable purchase
    private double payment;// variable will be assigned the value of the payment
    private String receipt;// variable will be assigned the value of the receipt
    private int itemCount;// variable will be assigned the value of the sales count

    //Constructor will construct a chash register class object with no money in it
    // @param rate the tax rate for taxable purchases
    public CashRegister(double rate)
    {
        taxRate = rate;
        purchase = 0;
        payment = 0;
        receipt = "";
        itemCount = 0;
    }

    //Method will record the sale of a tax-free item
    // @param amount the price of the item
    public void recordPurchase(double amount)
    {
        purchase = purchase + amount;
        receipt = receipt.concat("$" + amount + "\n");
        itemCount++;
    }

    //Method will print the prices for all purchased items and total amount of purchase
    // @return receipt is of the type String
    public String printReceipt()
    {
        return receipt + "Total: $" + purchase;
    }

    //Method will record the sale of a taxable item
    // @param amount the price of the item
    public void recordTaxablePurchase(double amount)
    {
        taxablePurchase = taxablePurchase + amount;
    }

    //Method will process a payment received from the customer
    // @param amount the amount of the payment
    public void receivePayment(double amount)
    {
        payment = payment + amount;
    }

    //Method will process the sales tax due
    // @return the sales tax due
    public double getSalesTax()
    {
        return taxablePurchase * taxRate / 100;
    }

    //Method will compute the change due and will reset the machine for the next customer
    // @return the change due to the customer
    public double giveChange()
    {
        double change = payment - purchase;
        purchase = 0;
        payment = 0;
        return change;
    }

    //Method will acquire the total purchases
    // @return the purchase total
    public double getSalesTotal()
    {
        return purchase;
    }

    //Method will acquire the total item count
    // @return the item count
    public int getItemCount()
    {
        return itemCount;
    }


    //Method will reset the counters and the totals
    public void reset()
    {
        purchase = 0;
        itemCount = 0;
        payment = 0;
        receipt = "";
    }
}
