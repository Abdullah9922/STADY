

import java.util.*;


class Customer
{
    private String name;
    private int customerId;
    private ArrayList<Order> orders;

    public Customer(String n, int id)
    {
        this.name = n;
        this.customerId = id;
        this.orders = new ArrayList<>();
    }

    public String getName()
    {
        return name;
    }

    public int getCustomerId()
    {
        return customerId;
    }

    public void placeOrder(Order o)
    {
        orders.add(o);
        //System.out.println("Order" + orders.getOrderId());
    }

    public ArrayList<Order> getOrders()
    {
        return orders;
    }
}


class Restaurant 
{
    private String name;
    private String location;
    private ArrayList<FoodItem> menu;

    public Restaurant(String n, String l)
    {
        this.name = n;
        this.location = l;
        this.menu = new ArrayList<>();
    }

    public String getName()
    {
        return name;
    }

    public String getLocation()
    {
        return location;
    }

    public void addFood(FoodItem f)
    {
        menu.add(f);
    }

    public ArrayList<FoodItem> getMenu()
    {
        return menu;
    }
}



class FoodItem
{
    private String name;
    private double price;
    private boolean isAvailable;

    public FoodItem(String n, double p)
    {
        this.name = n;
        this.price = p;
        this.isAvailable = true;
    }

    public String getName()
    {
        return name;
    }

    public double getPrice()
    {
        return price;
    }

    public boolean isAvailable()
    {
        return isAvailable;
    }

    public void setAvailable(boolean b)
    {
        this.isAvailable = b;
    }

}



class Order 
{
    private int orderId;
    private ArrayList<FoodItem> items;
    private double totalAmount;

    public Order(int id)
    {
        this.orderId = id;
        this.items = new ArrayList<>();
        this.totalAmount = 0.0;
    }

    public void addItem(FoodItem item) {
        if (item.isAvailable()) {
            items.add(item);
            totalAmount += item.getPrice();
        } else {
            System.out.println(item.getName() + " is not available.");
        }
    }

    public ArrayList<FoodItem> getItems()
    {
        return items;
    }

    public void calculateTotal() {
        totalAmount = 0.0;
        for (FoodItem item : items) {
            totalAmount += item.getPrice();
        }
    }

    public  double getTotalAmount()
    {
        return totalAmount;
    }

    public int getOrderId() {
        return orderId;
    }
}


public class RestorentMain {
    public static void main(String[] args) {
        
        Restaurant r = new Restaurant("StarCafet", "Minpur_10"); 

        FoodItem f1 = new FoodItem("Pizza", 550);
        FoodItem f2 = new FoodItem("Barger", 250);
        FoodItem f3 = new FoodItem("Pasta", 350);

        r.addFood(f1);
        r.addFood(f2);
        r.addFood(f3);


        Customer c1 = new Customer("Asif", 1005);

        Order o1 = new Order(001);
        

        o1.addItem(f1);
        o1.addItem(f2);

        c1.placeOrder(o1);

        System.out.println("Order Details for " + c1.getName() + ":");
        for (FoodItem item : o1.getItems()) {
            System.out.println("- " + item.getName() + " = " + item.getPrice() + " BDT");
        }
        System.out.println("Total: " + o1.getTotalAmount() + " BDT");
        
    }
}
