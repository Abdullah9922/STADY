
import java.util.ArrayList;

public class array_list_3 {
    
    private String name;
    private int age;

    public array_list_3(String n, int a)
    {
        this.name = n;
        this.age = a;
    }

    public void print()
    {
        System.out.println("Name is: " + name  + "\tAge: " + age);
    }

    public static void main(String[] args) {

        ArrayList<array_list_3> m = new ArrayList<>();

        System.out.println(m);

        m.add(new array_list_3("Asif", 22));
        m.add(new array_list_3("Himel", 20));
        m.add(new array_list_3("Limon", 21));
        m.add(new array_list_3("Jibon", 23));


        for(array_list_3 i:m){
            i.print();
        }


    }
}
