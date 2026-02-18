
import java.util.*;

public class t1
{
	public static void main(String[] args) {
	    
	    Scanner sc = new Scanner(System.in);
	    
	    
		System.out.println("Enter hight (in meters): ");
		double h = sc.nextDouble();
		
		
		System.out.println("Enter weight (in kilograms): ");
		int w = sc.nextInt();
		
		double bmi = w/(h*h);
		
		if(bmi < 18.5) System.out.println("BMI Category: Underweight");
		else if(18.5 <= bmi && bmi < 25) System.out.println("BMI Category: Normal weight");
		else if(25 <= bmi && bmi < 30) System.out.println("BMI Category: Overweight");
		else System.out.println("BMI Category: Obese");
		
		
		
	}
}
