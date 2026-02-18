
import java.util.Scanner;

public class array2 {
    public static void main(String[] args) {
        
        int sum=0;
        int[] marks = new int[5];

        Scanner sc = new Scanner(System.in);
        

        for(int i=0; i<5; i++){
            marks[i] = sc.nextInt();
        }
        
        for(int i=0; i<5; i++){
            sum += marks[i];
        }

        System.out.println("avg : " + sum/5);
    }
}
