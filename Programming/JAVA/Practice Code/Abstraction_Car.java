
abstract class Vehicle
{
    public abstract void move();
}



public class Abstraction_Car extends Vehicle {

    public void move()
    {
        System.out.println("Move forword.");
    }

    public static void main(String[] args) {
        Abstraction_Car c1 = new Abstraction_Car();
        c1.move();
    }
    
}
