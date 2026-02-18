
class Vahicle
{
    protected int speed;

    public Vahicle(int s)
    {
        this.speed = s;
    }

    public void display()
    {
        System.out.println("Speed2 is: " + speed);
    }
}


public class Inharitance_Car extends Vahicle {
    
    private int speed;
    
    public Inharitance_Car()
    {
        super(50);
        this.speed = 100;
    }

    public void display()
    {
        System.out.println("speed 1: " + speed);
        super.display();
    }

    public static void main(String[] args) {
        Inharitance_Car c = new Inharitance_Car();

        c.display();
    }

}
