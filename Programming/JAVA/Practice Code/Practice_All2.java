

interface Drivable
{
    public void drive ();
    public void stop();
}


abstract class Vehicle
{
    private String brand;
    private String model;

    Vehicle(String brand, String model)
    {
        this.brand = brand;
        this.model = model;
    }

    public void getDetails()
    {
        System.out.println("Brand :" + brand + "\nModel: " + model);
    }

    public abstract void start();
}



class Car extends Vehicle implements Drivable
{
    private int doors;

    Car(String brand, String model,int doors)
    {
        super(brand, model);
        this.doors = doors;
    }

    public void getDetails()
    {
        super.getDetails();
        System.out.println("It is not electric car. \nDoor count: " + doors );
    }

    public void start()
    {
        System.out.println("Car is Start.");
    }

    public void drive()
    {
        System.out.println("Car is drived by me.");
    }

    public void stop()
    {
        System.out.println("Car is Stop. ");
    }

}



class ElectricCar extends Vehicle implements Drivable
{
    private int batteryCapacity;

    ElectricCar(String brand, String model,int batteryCapacity)
    {
        super(brand, model);
        this.batteryCapacity = batteryCapacity;
    }

    public void getDetails()
    {
        super.getDetails();
        System.out.println("It is electric car. \nBattary Capacity: " + batteryCapacity );
    }

    public void start()
    {
        System.out.println("ElectricCar is Start.");
    }

    public void drive()
    {
        System.out.println("ElectricCar is drived by me.");
    }

    public void stop()
    {
        System.out.println("ElectricCar is Stop. ");
    }

}


public class Practice_All2 {

    public static void main(String[] args) {
        
        Car c1 = new Car("BMW", "M5", 4);
        c1.getDetails();
        c1.start();
        c1.drive();
        c1.stop();

        ElectricCar e1 = new ElectricCar("BMW", "M5", 40000);
        e1.getDetails();
        e1.start();
        e1.drive();
        e1.stop();
    }
    
}
