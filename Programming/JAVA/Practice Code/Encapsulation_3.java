

class Student
{
    private String name;
    private int id;
    private double cgpa;

    public void setName(String n){
        this.name = n;
    }

    public void setId(int i){
        this.id = i;
    }

    public void setCgpa(double c){
        this.cgpa = c;
    }

    public String getName(){
        return name;
    }

    public int getId(){
        return id;
    }

    public double getCgpa(){
        return cgpa;
    }
}


public class Encapsulation_3 {

    public static void main(String[] args) {
        
        Student s = new Student();

        s.setCgpa(4.4);
        s.setId(918);
        s.setName("Abudllah");

        System.out.println(s.getName());
        System.out.println(s.getId());
        System.out.println(s.getCgpa());
    }
    
}
