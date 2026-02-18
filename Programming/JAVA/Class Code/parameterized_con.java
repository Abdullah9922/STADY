public class parameterized_con {
    
    int height;
    int width;
    
    public parameterized_con(int height, int width)
    {
        System.out.println("Box Created.");
        this.height = height;
        this.width = width;
    }

    public static void main(String[] args) {
        
      parameterized_con box1 = new parameterized_con(10, 20);    
      System.out.println("The height of box1 = "+box1.height);
      System.out.println("The width of box1 = "+box1.width);
      
      parameterized_con box2 = new parameterized_con(100,200);      
       System.out.println("The height of box2 = "+box2.height);
       System.out.println("The width of box2 = "+box2.width);            
              
    }
}