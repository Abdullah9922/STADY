

class Product
{
    private int id;
    private String name;
    private double price;

    Product(int id, String name, double price)
    {
        this.id = id;
        this.name = name;
        this.price = price;
    }

    public String getDetails()
    {
        return name;
    }

    public double getPrice() {
        return price;
    }
}



class Electronics extends Product
{
    private int warranty;

    Electronics(int id, String name, double price,int warranty)
    {
        super(id, name, price);
        this.warranty = warranty;
    }
    
    @Override
    public String getDetails() {
        // TODO Auto-generated method stub
        return super.getDetails();
    }
}



class Clothing extends Product
{
    private int size;

    Clothing(int id, String name, double price,int size)
    {
        super(id, name, price);
        this.size = size;
    }
    
    @Override
    public String getDetails() {
        // TODO Auto-generated method stub
        return super.getDetails();
    }
}


class Customer
{
    private String name;
    private String email;

    Customer(String name , String email)
    {
        this.name = name;
        this.email = email;
    }

    public String getName()
    {
        return name;
    }

    public void setName(String name)
    {
        this.name = name;
    }
}



class Order implements OnlineOrder
{
    private int orderId;
    private Product product;
    private int quantity;


    Order(double deliveryCharge,int Oid, Product p, int q)
    {
        //super(id, name, price);
        this.deliveryCharge = deliveryCharge;
        this.orderId = Oid;
        this.product = p;
        this.quantity = q;
        
    }


    public double calculateTotal()
    {
        return product.getPrice() * quantity;
    }

    public void printInvoice()
    {
        System.out.println("Order Id: " + orderId);
        System.out.println("Quantity: " + quantity);
    }
}



interface OnlineOrder
{
    private double deliveryCharge;
    public double calculatePay();
    
}

abstract class Payment
{
    protected double amount;

    public Payment(double amount) {
        this.amount = amount;
    }
    
    public abstract void processPayment();
}


class CreditCardPayment extends Payment
{
    private String cardNumber;

    CreditCardPayment(double amount, String cardNumber)
    {
        super(amount);
        this.cardNumber = cardNumber;
    }

    public void processPayment()
    {

    }
}


class PayPalPayment extends Payment
{
    private String email;

    PayPalPayment(double amount, String email)
    {
        super(amount);
        this.email = email;
    }

    public void processPayment()
    {
        
    }
}



public class Practice_All {
    
}
