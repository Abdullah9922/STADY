import java.util.Scanner;

public class strings {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();

        System.out.println(name);

        String first = sc.nextLine();
        String last = sc.nextLine();

        String full = first + last;

        System.out.println(full);
        System.out.println(full.length());

        for(int i=0; i<full.length(); i++){
            System.out.println(full.charAt(i));
        }

        String sentance = "My name is tony";

        String name2 = sentance.substring(11,14); // starting index,ending index;
        System.out.println(name2);
    }
}
