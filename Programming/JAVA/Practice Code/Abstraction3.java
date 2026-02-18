
import java.util.*;

abstract class Shape
{
    public String color;

    Shape(String c)
    {
        this.color = c;
    }

    public abstract double getArea();
    public void display()
    {
        System.out.print("Here we go: ");
    }
}


class Circle extends Shape
{
    private double radius;

    Circle(String c ,double r)
    {
        super(c);
        this.radius = r;
    }

    public double getArea()
    {
        double ans = Math.PI * radius * radius;
        return ans;
    }

    public void display() {
        super.display();
        System.out.println("Shape: Circle");
        System.out.println("Radius: " + radius);
        System.out.println("Area: " + getArea());
    }

}


class Rectangle extends Shape
{
    private double lenght;
    private double width;

    Rectangle(String s, double l , double w)
    {
        super(s);
        this.lenght = l;
        this.width = w;
    }

    public double getArea()
    {
        return lenght * width;
    }

    public void display() {
        super.display();
        System.out.println("Shape: Rectangle");
        System.out.println("Length: " + lenght);
        System.out.println("Width: " + width);
        System.out.println("Area: " + getArea());
    }
}


public class Abstraction3 {
    
    public static void main(String[] args) {
        
        Circle c = new Circle("Red", 50.21);
        c.display();

        Rectangle r = new Rectangle("Blue", 0241.01, 014.360);
        r.display();
    }
}
