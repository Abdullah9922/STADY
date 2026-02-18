public class Exception_Throw {


   public static void main(String[] args) throws Exception {
        AgeChaker(20);
    }

    static void AgeChaker(int a) throws Exception {
        if(a < 18)
            throw new Exception("Not Adult.");
        else 
            System.out.println("Adult.");
    }

}
