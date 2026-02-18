
class Person
{
    protected String name;
    protected int age;

    public Person(String n, int a)
    {
        this.name = n;
        this.age = a;
    }

    public void display()
    {
        System.out.println("Name: " + name + "\nAge: " + age);
    }
}


public class Inharitance_Student extends Person {

    private int id;
    private double cgpa;

    public Inharitance_Student(String n, int a, int i, double c)
    {
        super(n,a);
        this.id = i;
        this.cgpa = c;
    }

    public void display()
    {
        super.display();
        System.out.println("Id: " + id + "\nCGPA: " + cgpa);
    }
    

    public static void main(String [] args)
    {
        Inharitance_Student c = new Inharitance_Student("Asif" , 23, 918, 3.40);
        c.display();
    }
}
