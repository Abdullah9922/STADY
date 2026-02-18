

interface FirstInterface
{
    public void myMethord();
}

interface SecondInterface
{
    public void myOtherMethord();
}


class DemoClass implements FirstInterface,SecondInterface
{
    public void myMethord()
    {
        System.out.println("Aeta first abba.");
    }

    public void myOtherMethord()
    {
        System.out.println("Aeta second abba.");
    }
}



public class Interface5 {
    public static void main(String[] args) {
        
        DemoClass d = new DemoClass();
        d.myMethord();
        d.myOtherMethord();
        
    }
}
