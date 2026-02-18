import java.util.ArrayList;

public class array_list {
    public static void main(String[] args) {
        ArrayList<String> cars = new ArrayList<>();
        
        cars.add("Volvo");
        cars.add("Tata");
        cars.add("Tesla");
        cars.add("Lambo");
        cars.add("Toyota");

        System.out.println(cars);

        cars.add("RR");
        System.out.println(cars);

        System.out.println("Index number 3:- " + cars.get(4));


        cars.set(3,"xxxxx");
        System.out.println(cars);

        cars.remove(3);
        System.out.println(cars);

        System.out.println("Size of array list: " + cars.size());


        cars.clear();
        System.out.println("Size of array list: " + cars.size());



    }
}
