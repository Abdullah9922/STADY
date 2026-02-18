

import java.util.ArrayList;

class Student {
    String name;
    int age;

    Student(String name, int age){
        this.name = name;
        this.age = age;
    }

    public String toString() {
        return name + " (" + age + ")";
    }
}




public class ArrayList_Prac {
    
    public static void main(String[] args) {
        ArrayList<Student> students = new ArrayList<>();

        students.add(new Student("Asif", 21));
        students.add(new Student("Rahim", 22));
        students.add(new Student("Karim", 23));

        System.out.println("Custom Object ArrayList: " + students);
    }
}
