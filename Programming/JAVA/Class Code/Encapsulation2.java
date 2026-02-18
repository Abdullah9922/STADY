class person {
    
    private String name;
    private int age;

    public void setName(String n)
    {
        this.name = n;
    }

    public void setAge(int a)
    {
        this.age = a;
    }

    public String getName()
    {
        return name;
    }

    public int getAge()
    {
        return age;
    }
}


public class Encapsulation2
{
    public static void main(String[] args) {
        person obj = new person();

        obj.setAge(20);
        obj.setName("Arif");

        System.out.println("Name: " + obj.getName());
        System.out.println("Age: " + obj.getAge());
    }
}

