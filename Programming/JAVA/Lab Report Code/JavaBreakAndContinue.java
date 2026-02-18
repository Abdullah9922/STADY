public class JavaBreakAndContinue {
    public static void main(String[] args) {

        System.out.println("Using break:");
        for (int i = 1; i <= 10; i++) {
            if (i == 6) {
                break;
            }
            System.out.println("Iteration " + i + ": Name: Ishtyaq Ahmed Abdullah, ID: 241-15-918");
        }

        System.out.println("\nUsing continue:");
        for (int i = 1; i <= 10; i++) {
            if (i % 2 == 0) {
                continue;
            }
            System.out.println("Iteration " + i + ": Name: Ishtyaq Ahmed Abdullah, ID: 241-15-918");
        }
    }
}
