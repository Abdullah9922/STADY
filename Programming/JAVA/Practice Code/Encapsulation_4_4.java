
import java.util.ArrayList;

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


public class Encapsulation_4_4 {

    public static void main(String[] args) {
        
        ArrayList<Student> s = new ArrayList<>();

        s.add(new Student("Arif", 526, 3.59));
        s.add(new Student("Arif", 222, 3.11));
        s.add(new Student("Asik", 254, 3.43));

        

        for(Student i: s){
            i.display();
            System.out.println();
        }

        //System.out.println(s);
        //System.out.println(s.get(1));

    }
    
}
