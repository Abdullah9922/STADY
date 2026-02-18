public class Exception_Test {
    public static void main(String[] args) {
        try {
            int a = 5 / 1;
            System.out.println("No exception Found.");
        } 

        catch (Exception e) {
            System.out.println("Exception found.");
        } 
        
        finally {
            System.out.println("Rest of the code.");
        }
    }
}
