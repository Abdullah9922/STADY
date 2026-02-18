
class Student
{
    private String name;
    private int id;
    private double cgpa;


    Student (String n, int i, double c){
        this.name = n;
        this.id = i;
        this.cgpa = c;
    }

    public void display()
    {
        System.out.println(name);
        System.out.println(id);
        System.out.println(cgpa);
    }
}


public class Encapsulation_4_3 {

    public static void main(String[] args) {
        
        Student s1 = new Student("Abullah",918,3.4);
        Student s2 = new Student("Rahat",599,3.8);

        s1.display();
        s2.display();
    }
    
}
