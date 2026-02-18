

abstract class Vehicle
{
    public Vehicle()
    {
        System.out.println("Vehicale is here");
    }

    public abstract void move();
    public abstract void carry();

    
}


class Car extends Vehicle
{
    public void move()
    {
        System.out.println("Car can move forword.");
    }

    public void carry()
    {
        System.out.println("Car can carry people. ");
    }
}


class Boat extends Vehicle 
{
    public void move()
    {
        System.out.println("Nowka vromon. ");
    }

    public void carry()
    {
        System.out.println("With friend.");
    }
}


public class Abstraction {
    
    public static void main(String [] args)
    {
        Car c = new Car();
        c.carry();
        c.move();

        Boat b = new Boat();
        b.carry();
        b.move();

    }
}
