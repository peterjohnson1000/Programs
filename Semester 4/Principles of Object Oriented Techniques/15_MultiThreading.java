// Develop a Java application that executes two threads. One thread displays-“Hello” in
// every 1000 milliseconds and the other displays-“World” in every 3000 milliseconds.
// Create the threads by extending the Thread class.

class hello extends Thread
{
    public void run()
    {
        for(int i = 1; i <= 5; i++)
        {
            System.out.println("Hello");
            try
            {
                Thread.sleep(1000);
            }
            catch(Exception e) {}
        }
    }
}

class world extends Thread
{
    public void run()
    {
        for(int i = 1; i <= 5; i++)
        {
            System.out.println("World");
            try
            {
                Thread.sleep(3000);
            }
            catch(Exception e) {}
        }
    }
}

class ThreadDemo 
{
    public static void main(String args[])
    {
        hello obj1 = new hello();
        world obj2 = new world();

        obj1.start();
        obj2.start();
    }
}
