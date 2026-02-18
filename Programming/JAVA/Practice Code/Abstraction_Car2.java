

abstract class Vehicle
{
    public Vehicle()
    {
        System.out.println("Hi there. ");
    }

    public abstract void move();
    public abstract void carry();
}



public class Abstraction_Car2 extends Vehicle
{
    @Override
    public void move() {
        System.out.println("Vehicle can move.");
    }

    public void carry()
    {
        System.out.println("Vahicle can carry.");
    }


    public static void main(String[] args) {
        
        Abstraction_Car2 c = new Abstraction_Car2();

        c.carry();
        c.move();
    }

    
}
