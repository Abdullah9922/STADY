

abstract class Animal
{
    public abstract void eat();
    public abstract void move();
    public abstract void life();

}


class Human extends Animal
{
    public void eat()
    {
        System.out.println("Human eat kala vuna.");
    }

    public void move()
    {
        System.out.println("hat pa sob tik thakle pare");
    }

    public void life()
    {
        System.out.println("60 bosor normaly bache");
        System.out.println();
        System.out.println();
    }

}


class Lion extends Animal
{
    public void eat()
    {
        System.out.println("Ranna na korae khai");
    }

    public void move()
    {
        System.out.println("can also move");
    }

    public void life()
    {
        System.out.println("Jani na to");
        System.out.println();
        System.out.println();
    }
    
}


class Bird extends Animal
{
    public void eat()
    {
        System.out.println("moka makor kahi re vai.");
    }

    public void move()
    {
        System.out.println("Ourte pare re vai.");
    }

    public void life()
    {
        System.out.println("ki jane koto din jani na");
        System.out.println();
        System.out.println();
    }
}


public class Abstraction2 {
    public static void main(String[] args) {
        
        Human h = new Human();
        h.eat();
        h.move();
        h.life();

        Lion l = new Lion();
        l.eat();
        l.move();
        l.life();

        Bird b = new Bird();
        b.eat();
        b.move();
        b.life();


    }
}
