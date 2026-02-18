

interface Drowing {

    public void drow();
    
}


class Line implements Drowing
{
    public void drow()
    {
        System.out.println("Drowing a line.");
    }
}


class Circle implements Drowing
{
    public void drow()
    {
        System.out.println("Drowing a circle.");
    }
}


public class Interface2 {

    public static void main(String[] args) {
        
        Line l = new Line();
        l.drow();

        Circle c = new Circle();
        c.drow();
    }
    
}
