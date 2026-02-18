interface Player {

    public void play();
    public void stop();
    public void pause();
    public void reverse();

}


class CDPlayer implements Player
{
    public void audio()
    {
        System.out.println("It is audio player.");
    }

    public void play()
    {
        System.out.println("Play audio.");
    }

    public void stop()
    {
        System.out.println("Stop audio.");
    }

    public void pause()
    {
        System.out.println("Pause audio.");
    }

    public void reverse()
    {
        System.out.println("Reverse audio.");
    }
}



class DVDPlayer implements Player
{
    public void video()
    {
        System.out.println("It is video player.");
    }

    public void play()
    {
        System.out.println("Play video.");
    }

    public void stop()
    {
        System.out.println("Stop video.");
    }

    public void pause()
    {
        System.out.println("Pause video.");
    }

    public void reverse()
    {
        System.out.println("Reverse video.");
    }
}


public class Interface3
{
    public static void main(String[] args) {
        
        CDPlayer c = new CDPlayer();
        c.audio();
        c.play();
        c.pause();
        c.stop();
        c.reverse();


        DVDPlayer d = new DVDPlayer();
        d.video();
        d.play();
        d.pause();
        d.stop();
        d.reverse();

    }
}