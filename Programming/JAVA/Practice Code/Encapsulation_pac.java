

class Person 
{
    private String name;
    private int age;

    public String getName(){
        return name;
    }

    public int getAge()
    {
        return age;
    }

    public void setName(String n)
    {
        this.name = n;
    }

    public void setAge(int a)
    {
        this.age = a;
    }
}


public class Encapsulation_pac {
    
    public static void main(String[] args)
    {
        Person obj = new Person();

        obj.setAge(30);
        obj.setName("Asif");

        System.out.println("Name : " + obj.getName());
        System.out.println("Age: " + obj.getAge());
    }
}
