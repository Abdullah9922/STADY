
import java.util.*;

public class Input {
    
    public static void main(String [] args)
    {
        Scanner sc = new Scanner(System.in);
        String name = sc.next();
        sc.nextLine();
        System.out.println(name);

        String FullName = sc.nextLine();
        System.out.println(FullName);


        int age = sc.nextInt();
        System.out.println("My age is: " + age);
    }
}
