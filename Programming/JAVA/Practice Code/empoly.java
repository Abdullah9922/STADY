public class empoly {
    
    int id;
    String name;

    public empoly(int a, String b)
    {
        this.id = a;
        this.name = b;
    }

    public void print()
    {
        System.out.println("Id-"+id+"\n"+"Name-"+name);
    }

    public static void main(String[] args) {

        empoly e1 = new empoly(111,"Asif");
        empoly e2 = new empoly(222,"Himel");


        e1.print();
        e2.print();

    }

}
