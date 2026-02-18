

interface Drowing
{

    public void drow();
}

class Line implements Drowing
{
    public void drow()
    {
        System.out.println("I am dorwing a line.");
    }
}


public class Interface1 {

    public static void main(String[] args) {
        Line l = new Line();
        l.drow();
    }
    
}
