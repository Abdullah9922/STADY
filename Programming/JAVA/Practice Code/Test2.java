
import java.util.*;


class Student
{
    private String name;
    private int id;
    private int marks;


    public Student(String s, int id, int m)
    {
        this.name = s;
        this.id = id;
        this.marks = m;

    }

    public void display()
    {
        System.out.println("Name: " + name);
        System.out.println("ID: " + id);
        System.out.println("Marks: " + marks);
    }
}




public class Test2 {
    public static void main(String[] args) {

        String na;
        int id;
        int m;

        ArrayList<Student> s = new ArrayList<>();

        System.out.print("Enter the number of Student: ");

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();


        for(int i=0; i<n; i++){

            System.out.println("For student "  +  (i+1) + ": ");


            System.out.print("Name: ");
            sc.nextLine();
            na = sc.nextLine();

            System.out.print("Id: ");
            id = sc.nextInt();

            System.out.print("Marks: ");
            m = sc.nextInt();


            s.add(new Student(na, id, m));


        }

        System.out.println();
        System.out.println();

        System.out.println("All student info: ");
        for(Student i : s)
        {
            i.display();
            System.out.println();
        }
        
    }
}
