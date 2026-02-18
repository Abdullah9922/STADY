
class SigmaMan
{
    String name;
    int age; 
    int bank_blance;

    public void printInfo(){
        System.out.println("I don't care about gril");
        System.out.println("I do gym everyday");
    }
}

public class oops1 {
    public static void main(String[] args) {
        SigmaMan man1 = new SigmaMan();
        man1.name = "Rahat";
        man1.age = 22;
        man1.bank_blance = 1000000;

        man1.printInfo();

        System.out.println(man1.name);
    }
}
