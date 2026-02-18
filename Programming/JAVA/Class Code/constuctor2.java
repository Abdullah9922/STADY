public class constuctor2 {
    
    int x;
    int y;
    public constuctor2(int y)
    {
        x = 5;
        this.y = y;

    }

    public static void main(String[] args)
    {
        constuctor2 a = new constuctor2(10);
        
        System.out.println(a.x);
    }
}
