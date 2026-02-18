class Encapsulation {
    
    private String name;

    public void setName(String n)
    {
        this.name = n;
    }

    public String getName()
    {
        return name;
    }
}

public class Main_class
{
    public static void main(String[] args) {
        
        Encapsulation a = new Encapsulation();
        a.setName("Asif");
        System.out.println(a.getName());
    }
}
