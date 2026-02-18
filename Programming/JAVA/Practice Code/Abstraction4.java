

import java.util.*;


abstract class Payment
{
    private double amount;

    Payment(double a)
    {
        this.amount = a;
    }

    public abstract void pay();
    public void showInfo()
    {
        System.out.println("Payment: ");
    }
}



class CreditCard extends Payment
{
    private int cardNumber;
    private int cvv;

    CreditCard(double a, int c, int v)
    {
        super(a);
        this.cardNumber = c;
        this.cvv = v;
    }


    public void pay()
    {
        System.out.println("Payment Done by CreditCard.");
    }


    public void showInfo()
    {
        super.showInfo();
        System.out.println("Payment by using Creditcard.");
    }
}


class BkashPayment extends Payment
{
    private int phoneNumber;
    private int transactionId;

    BkashPayment(double a, int n, int t)
    {
        super(a);
        this.phoneNumber = n;
        this.transactionId= t;
    }

    public void pay()
    {
        System.out.println("Payment Done by Bkash.");
    }

    public void showInfo()
    {
        super.showInfo();
        System.out.println("Payment by using Bkash.");
    }
}


public class Abstraction4 {

    public static void main(String[] args) {
        
        // CreditCard c = new CreditCard(250, 32645655, 0351464);
        // c.showInfo();
        // c.pay();

        // BkashPayment b = new BkashPayment(1512655, 062255, 0145526);
        // b.showInfo();
        // b.pay();


        ArrayList <Payment> payments = new ArrayList<>();

        payments.add (new BkashPayment(654,85,88));
        payments.add (new CreditCard(02654, 01102, 06455165));


        for(Payment i: payments)
        {
            i.showInfo();
            i.pay();
            System.out.println();
        }

    }
    
}
