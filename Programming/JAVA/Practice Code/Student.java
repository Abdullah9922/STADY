class Person {
    protected String name;
    protected int age;

    public Person(String n, int a) {
        this.name = n;
        this.age = a;
    }

    public void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}

class Student extends Person {
    private int id;
    private double cgpa;

    public Student(String n, int a, int i, double c) {
        super(n, a);
        this.id = i;
        this.cgpa = c;
    }

    public void display() {
        super.display();
        System.out.println("ID: " + id);
        System.out.println("CGPA: " + cgpa);
    }

    public static void main(String[] args) {
        Student s = new Student("Asif", 25, 918, 3.56);
        s.display();
    }
}
