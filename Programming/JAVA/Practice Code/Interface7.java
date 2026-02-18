
import java.util.*;

abstract class User
{
    private String name;
    private String email;

    User(String name, String email)
    {
        this.name = name;
        this.email = email;
    }

    public String getName()
    {
        return name;
    }

    public abstract void login();
    public abstract void logout();

}


class Admin extends User implements Notifiable
{
    private String role;

    Admin(String name, String email, String role)
    {
        super(name, email);
        this.role = role;
    }

    public void manageUser()
    {

    }

    public void login()
    {
        System.out.println(getName() + " Log in the system.");
    }

    public void logout()
    {
        System.out.println(getName() + " Log out the system.");
    }

    public void Notifiable()
    {
        System.out.println(getName()  + " is here.");
    }

}


class Customer extends User implements Notifiable
{
    private int customerId;
    private ArrayList<Oeder> list;

    Customer(String name, String email, int id)
    {
        super(name, email);
        this.customerId = id;
        this.list = new ArrayList<>();
    }

    public void placeOrder()
    {

    }

    public void login()
    {
        System.out.println(getName() + " Log in the system.");
    }

    public void logout()
    {
        System.out.println(getName() + " Log out the system.");
    }

    public void Notifiable()
    {
        System.out.println(getName()  + " is here.");
    }

}


class Oeder
{
    private int orderId;
    private double amount;

    public void showDetails()
    {
        System.out.println("Order id: " + orderId);
        System.out.println("Order amount: " + amount);
    }
}


interface Notifiable
{
    public void Notifiable();
}


public  class Interface7
{
    public static void main(String[] args) {
        
    }
}