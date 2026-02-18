

class Animal 
{
    private String name;

    public Animal(String n)
    {
        this.name = n;
    }

    public void makeSound()
    {
        System.out.println("Animal make sound.");
    }

    public void display()
    {
        System.out.println("Name of the animal: " + name);
    }
}

public class Inharitance_Dog extends Animal {
    
    private String breed;

    public Inharitance_Dog(String n, String b)
    {
        super(n);
        this.breed = b;
    }

    public void  makeSound()
    {
        super.makeSound();
        System.out.println("Every dog breed make different sound.");
    }

    public void display()
    {
        super.display();
        System.out.println("Breed name is: " + breed );
    }

    public static void main(String[] args) {
        Inharitance_Dog d = new Inharitance_Dog("Dog", "Haski");

        d.makeSound();
        d.display();
    }
}
