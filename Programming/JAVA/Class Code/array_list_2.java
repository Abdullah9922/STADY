
import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class array_list_2 {

    public static void main(String[] args) {
    
        ArrayList<Integer> num = new ArrayList<>();
        Scanner sc = new Scanner(System.in);


        System.out.println("Enter Five integer number:-");
        for(int i=0; i<5; i++){
            System.out.print("Number "+(i+1)+": ");
            int n = sc.nextInt();
            num.add(n);
        }

        System.out.println(num);

        Collections.sort(num);
        System.out.println("After sort: " + num);


        num.set(2,999);
        System.out.println(num);

        num.remove(2);
        System.out.println(num);

        System.out.println("Size of the array list: " + num.size());
        //num.clear();

        System.out.println(num);

    }

}
