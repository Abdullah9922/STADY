
import java.util.*;


interface Payable
{
    public double calculatePay();
}

abstract class Employee
{
    private String name;
    private int id;

    Employee(String n, int i)
    {
        this.name = n;
        this.id = i;
    }

    public void displayInfo()
    {
        System.out.println("Employee Info: ");
        System.out.println("Name: " + name);
        System.out.println("Id: " + id);
    }
}


class Freelancer  extends Employee implements Payable
{

    private int hoursWorked;
    private double ratePerHour;

    Freelancer(String n, int i, int h, double r)
    {
        super(n, i);
        this.hoursWorked = h;
        this.ratePerHour = r;
    }

    public double calculatePay()
    {
        return ratePerHour*hoursWorked;
    }

    public void displayInfo()
    {
        System.out.println("Frelancer.");
        super.displayInfo();
        System.out.println("Salary: " + calculatePay());
    }

}


class FullTimeEmployee extends Employee
{
    private double salary;

    FullTimeEmployee(String n, int i, double s)
    {
        super(n, i);
        this.salary = s;
    }

    public double calculatePay()
    {
        return salary;
    }

    public void displayInfo()
    {
        System.out.println("Full time Employee.");
        super.displayInfo();
        System.out.println("Salary: " + salary);
    }
}



public class Interface6 {
    public static void main(String[] args) {
        
        FullTimeEmployee f = new FullTimeEmployee("Asif", 52654,50000.01);
        f.displayInfo();

        Freelancer l = new Freelancer("Arif", 5236642,6, 010000);
        l.displayInfo();
        System.out.println();
        System.out.println();


        ArrayList <Employee> e = new ArrayList<>();
        e.add(new Freelancer("Jabed" , 65666656, 4, 05000));
        e.add(new Freelancer("Himel" , 54266, 5, 06000));

        e.add(new FullTimeEmployee("Korim" , 563656,25000));
        e.add(new FullTimeEmployee("Niloy" , 2652366,30000.01));


        for(Employee i:e)
        {
            i.displayInfo();
            System.out.println();
        }
        
    }
}
