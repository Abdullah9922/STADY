
class car{
    String name;
    int number;
    double price;

    public void Wheel(){
        System.out.println("Wheel rotait carulerly");
    }
    public void Window(){
        System.out.println("window can be open and close");
    }

    public void Pirnt(){
        System.out.println("Name of car  : " + this.name);
        System.out.println("Number plate : " + this.number);
        System.out.println("Little Price : " + this.price);
    }

    car(){ // sober age aeta print hosse mane aeter kaj hosse
        System.out.println("All info");
    }
}

public class oops2 {
    public static void main(String[] args) {
        car BMW = new car();

        BMW.name = "BMW M8";
        BMW.number = 001;
        BMW.price = 199999999.99;

        //BMW.Wheel();
        
        BMW.Pirnt();
        BMW.Window();
    }
}
