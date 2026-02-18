public class JavaMethods {
    void printInfo() {
        System.out.println("Name: Ishtyaq Ahemd Abduulah");
        System.out.println("ID: 241-15-918-+");
    }

    // Method with arguments but no return value
    void printMarks(String subject, int marks) {
        System.out.println(subject + " Marks: " + marks);
    }

    // Method with no arguments but with return value
    int getTotalMarks() {
        return 85 + 90 + 75;
    }

    // Method with arguments and return value
    int addNumbers(int a, int b) {
        return a + b;
    }

    public static void main(String[] args) {
        JavaMethods obj = new JavaMethods();

        System.out.println("=== Method with no arguments and no return value ===");
        obj.printInfo();

        System.out.println("\n=== Method with arguments but no return value ===");
        obj.printMarks("Math", 90);
        obj.printMarks("Physics", 85);

        System.out.println("\n=== Method with no arguments but with return value ===");
        int total = obj.getTotalMarks();
        System.out.println("Total Marks: " + total);

        System.out.println("\n=== Method with arguments and return value ===");
        int sum = obj.addNumbers(50, 40);
        System.out.println("Sum of numbers: " + sum);
    }
}
