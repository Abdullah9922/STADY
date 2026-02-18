

class Vehicle
{
    public String vehicleNumber;
    public String brand;
    public String engineCapacity;

    public Vehicle(String n, String b, String e)
    {
        this.vehicleNumber = n;
        this.brand = b;
        this.engineCapacity = e;

    }

    public void displayDetails()
    {
        System.out.println("Vehicle Number: " + vehicleNumber + "\nBrand:" + brand + "\nEngine Capacity: " + engineCapacity);
    }
}

class Car extends Vehicle
{
    public int numberOfSeats;
    public String fueltype;

    public Car(String n, String b, String e, int ns, String f)
    {
        super(n, b, e);
        this.numberOfSeats = ns;
        this.fueltype = f;
    }

    public void displayDetails()
    {
        System.out.println("--- Car Details ---");
        super.displayDetails();
        System.out.println("Type: Cars");
        System.out.println("Number of Seats: " + numberOfSeats + "\nFuel Type: " + fueltype);
    }

}



class Bike extends Vehicle
{
    public String hasCarrier;

    public Bike(String n, String b, String e, String h)
    {
        super(n, b, e);
        this.hasCarrier = h;
    }


    public void displayDetails()
    {
        System.out.println("--- Bike Details ---");
        super.displayDetails();
        System.out.println("Type: Bike");
        System.out.println("Carrier Info: " + hasCarrier );
    }

}



class Truck extends Vehicle
{
    public String loadCapacity;
    public int axleCount;

    public Truck(String n, String b, String e, String f, int ns)
    {
        super(n, b, e);
        this.loadCapacity = f;
        this.axleCount = ns;
    }


    public void displayDetails()
    {
        System.out.println("--- Truck Details ---");
        super.displayDetails();
        System.out.println("Type: Truck");
        System.out.println("Load Capacity: " + loadCapacity + "\nAxle Count: " + axleCount);
    }


}




public class Test3 {
    public static void main(String[] args) {
        
        Car c = new Car("C-1234", "Toyota", "1500cc", 5, "Petrol");
        Bike b = new Bike("B-5678", "Yamaha", "150cc", "With Carrier");
        Truck t = new Truck("T-9012", "Tata", "5000cc", "10 tons", 6);


        c.displayDetails();
        System.out.println();

        b.displayDetails();
        System.out.println();

        t.displayDetails();
        System.out.println();


    }
}
