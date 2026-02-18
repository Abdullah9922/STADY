
class pen
{
    String colour;
    String type;

    public void write(){
        System.out.println("writing someting");
    }

    public void pirntColour(){
        System.out.println(this.colour);
    }
}


class Student
{
    String name;
    int age;

    public void printInfo(){
        System.out.println(this.name);
        System.out.println(this.age);
    }

    Student(){ // Constructor 
        System.out.println("Contructer called"); // no return return type no peramiter pass
    }


    // Student(String name2, int age2){ // peramiterise constructor
    //     this.name = name2;
    //     this.age = age2;
    // }


    Student(Student kola){ // copy constructor
        this.name = kola.name;
        this.age = kola.age;
    }
}



public class OOPs1 {
    public static void main(String[] args) {
        
        pen pen1 = new pen();

        pen1.colour = "blue";
        pen1.type = "gel";
        //pen1.write();


        pen pen2 = new pen();
        pen2.colour = "Black";
        pen2.colour= "ballpoint";


        //pen1.pirntColour();
        //pen2.pirntColour();


        Student s1 = new Student();
        s1.name = "Abdullah";
        s1.age = 22;

        //s1.printInfo();


        //Student s2 = new Student("Asif" , 24);
        //s2.printInfo();


        Student s3 = new Student(s1);
        s3.printInfo();


    }
}
