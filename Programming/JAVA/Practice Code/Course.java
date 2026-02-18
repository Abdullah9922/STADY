

import java.util.ArrayList;


class Person
{
    public String name;
    public String email;


    public Person(String n , String e)
    {
        this.name = n;
        this.email = e;
    }

    void display()
    {
        System.out.println("Name: " + name + "\nEmail: " + email);
    }
}


class Instructor extends Person
{
    public int instructorId;
    public ArrayList<Course> courseList;


    public Instructor(String n , String e, int i)
    {
        super(n,e);
        this.instructorId = i;
        courseList = new ArrayList<>();
    }

    public void display()
    {
        super.display();
        System.out.println("Id: " + instructorId);

        System.out.println("Courses Created:");
        for (Course i : courseList) {
            System.out.println("- " + i);
        }

    }

    public void addcourse(Course c)
    {
        courseList.add(c);
    }
}


class Student extends Person
{
    public int studentId;
    ArrayList <Course> enrolledCourses;

    public Student(String n , String e, int i)
    {
        super(n,e);
        this.studentId = i;
        enrolledCourses = new ArrayList<>();
    }

    public void enroll(Course c)
    {
        enrolledCourses.add(c);
    }
}


public class Course
{
    public int courseId;
    public String courseName;


    //@Override
    public String toString() {
        return courseId + " - " + courseName;
    }

    


    public Course(int i, String n)
    {
        this.courseId = i;
        this.courseName = n;
        
    }

    public static void main(String[] args) {


        ArrayList<Course> c = new ArrayList<>();
        c.add(new Course(102, "Algorithom"));
        c.add(new Course(103, "Data Structor"));
        c.add(new Course(101, "Java Programming"));
        c.add(new Course(102, "Algorithm"));
        c.add(new Course(103, "Data Structures"));
        c.add(new Course(104, "Operating Systems"));
        c.add(new Course(105, "Database Management"));




        Instructor i1 = new Instructor("Rasel", "rasel@gmail.com", 15);
        i1.addcourse(c.get(1));
        i1.addcourse(c.get(2));
        i1.addcourse(c.get(0));

        System.out.println("Insturects: ");
        i1.display();


        Student s1 = new Student("abd", "abd@gamil.com", 918);
        Student s2 = new Student("asif", "asif@gamil.com", 204);


        s1.enroll(c.get(1));

        s2.enroll(c.get(0));
        s2.enroll(c.get(1));





    }
    
}



