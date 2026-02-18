public class Non_parameterized_con {
    
    int height;
    int width;
    
    public Non_parameterized_con()
    {
        System.out.println("Box Created.");
        this.height = 10;
        this.width = 20;
    }

    public static void main(String[] args) {
        
      Non_parameterized_con box1 = new Non_parameterized_con();    
      System.out.println("The height of box1 = "+box1.height);
      System.out.println("The width of box1 = "+box1.width);
      
      Non_parameterized_con box2 = new Non_parameterized_con();      
       System.out.println("The height of box2 = "+box2.height);
       System.out.println("The width of box2 = "+box2.width);            
              
    }
}