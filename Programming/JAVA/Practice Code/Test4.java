

interface BasicContorl
{
    public void turnOn();
    public void turnOff();

}


interface AdvancedControl
{
    public void setMode(String mode);
}


class Light implements BasicContorl,AdvancedControl
{
    public void turnOn()
    {
        System.out.println("Light is turned ON.");
    }

    public void turnOff()
    {
        System.out.println("Light is turned OFF");
    }

    public void setMode(String mode)
    {
        System.out.println("Light mode set to: " + mode);
    }
}



class Fan implements BasicContorl,AdvancedControl
{
    public void turnOn()
    {
        System.out.println("Fan is turned ON.");
    }

    public void turnOff()
    {
        System.out.println("Fan is turned OFF.");
    }

    public void setMode(String mode)
    {
        System.out.println("Fan mode set to: " + mode);
    }
}



public class Test4 {
    public static void main(String[] args) {

        Light l = new Light();
        l.turnOn();
        l.setMode("Dim");
        l.turnOff();


        Fan f = new Fan();
        f.turnOn();
        f.setMode("High");
        f.turnOff();
        
    }    
}
