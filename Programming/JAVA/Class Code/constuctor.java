

// with out using constuctor

public class constuctor {
    
    int x;
    
    public void methord (int x)
    {
        this.x = x;
    }
    
    public static void main(String[] args)
    {
        constuctor m = new constuctor();
        m.methord(5);
        
        System.out.println(m.x);
    }
}
