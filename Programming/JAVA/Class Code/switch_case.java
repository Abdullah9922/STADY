
import java.util.Scanner;

public class switch_case {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int button = sc.nextInt();

        switch(button){

            case 1: System.out.println("Hello");
            break;

            case 2: System.out.println("Hi");
            break;

            default : System.out.println("Worng input");
        }
    }
}
