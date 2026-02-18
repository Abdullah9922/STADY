

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

    Student (String n, int i, double c){
        this.name = n;
        this.id = i;
        this.cgpa = c;

        System.out.println(getName());
        System.out.println(getId());
        System.out.println(getCgpa());
    }
}


public class Encapsulation_4_sir {

    public static void main(String[] args) {
        
        Student s1 = new Student("Abullah",918,3.4);
        Student s2 = new Student("Rahat",599,3.8);

        /*s.setCgpa(4.4);
        s.setId(918);
        s.setName("Abudllah");*/

        System.out.println(s1.getName());
        System.out.println(s1.getId());
        System.out.println(s1.getCgpa());

        s2.setName("Asif");
        s2.setId(52);
        s2.setCgpa(3.55);

        
    }
    
}
