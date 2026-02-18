
class empoly
{
    private String name;
    private int id;
    private double salary;

    public void setName(String n){
        this.name = n;
    }

    public void setId(int i){
        this.id = i;
    }

    public void setSalary(double s){
        this.salary = s;
    }

    public String getName(){
        return name;
    }

    public int getId(){
        return id;
    }

    public double getSalary(){
        return salary;
    }

    public empoly(String n, int i, double s){
        setName(n);
        setId(i);
        setSalary(s);
    }
}

public class Encapsulation_5 {
    
    public static void main(String[] args) {
        
        Student e1 = new Student("Asif",918,50000.99);
        Student e2 = new Student("Arif",555,5015400.99);

        System.out.println(e1.getName());
        System.out.println(e1.getId());
        System.out.println(e1.getCgpa());

        System.out.println(e2.getName());
        System.out.println(e2.getId());
        System.out.println(e2.getCgpa());
    }
}
