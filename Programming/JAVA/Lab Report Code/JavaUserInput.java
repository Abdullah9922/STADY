import java.util.Scanner;
public class JavaUserInput {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter your name: ");
        String name = sc.nextLine();

        System.out.print("Enter your student status (true/false): ");
        boolean isStudent = sc.nextBoolean();

        System.out.print("Enter your age (byte): ");
        byte age = sc.nextByte();

        System.out.print("Enter your height in meters (double): ");
        double height = sc.nextDouble();

        System.out.print("Enter your CGPA (float): ");
        float cgpa = sc.nextFloat();

        System.out.print("Enter your ID (int): ");
        int id = sc.nextInt();

        System.out.print("Enter your long registration number: ");
        long regNo = sc.nextLong();

        System.out.print("Enter your short section number: ");
        short section = sc.nextShort();

        System.out.println("\n--- Your Details ---");
        System.out.println("Name: " + name);
        System.out.println("Student: " + isStudent);
        System.out.println("Age: " + age);
        System.out.println("Height: " + height);
        System.out.println("CGPA: " + cgpa);
        System.out.println("ID: " + id);
        System.out.println("Registration No: " + regNo);
        System.out.println("Section: " + section);
        sc.close();
    }
}