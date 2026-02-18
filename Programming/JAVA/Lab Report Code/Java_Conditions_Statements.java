public class Java_Conditions_Statements {
    public static void main(String[] args) {
        int marks = 85;

        System.out.println("Name: Ishtyaq Ahmed Abdullah");
        System.out.println("ID: 241-15-918");
        System.out.println("Department: CSE");
        System.out.println("University: Daffodil International University");
        System.out.println("Marks: " + marks);

        if (marks >= 90) {
            System.out.println("Grade: A+");
        } else if (marks >= 75) {
            System.out.println("Grade: A");
        } else if (marks >= 60) {
            System.out.println("Grade: B");
        } else if (marks >= 50) {
            System.out.println("Grade: C");
        } else {
            System.out.println("Grade: F");
        }
    }
}
