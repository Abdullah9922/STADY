
import java.util.Scanner;
import java.lang.Math;

public class array2
{
    public static void main(String[] args) {
        int[] arr = new int[10];

        Scanner sc = new Scanner(System.in);

        for(int i=0; i<10; i++){
            arr[i] = sc.nextInt();
        }

        int sum = 0;
        for(int i=0; i<10; i++){
            sum += arr[i];
        }

        System.out.println("Sum = " + sum);

        double a = (double)arr[0];
        int b = Math.abs(arr[1]);
        int max = Math.max(arr[2],arr[3]);
        int min = Math.min(arr[5],arr[6]);
        double f = Math.floor(a);

        double p = Math.pow(5,2);
        double s = Math.sqrt(66.64);
        

    }
}