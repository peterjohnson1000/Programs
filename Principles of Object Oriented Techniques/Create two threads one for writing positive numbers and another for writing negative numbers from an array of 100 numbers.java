// Write a java program to create two threads, one for writing positive numbers and another for writing negative numbers from an array of 100 numbers.

class randomNumber extends Thread
{
      public void run()
    {
        int[] num = {1,2,3,-1,4,-5,-1,10,11,-20};
        int len = num.length;
        for(int i = 0; i < len; i++)
        {
            if(num[i] > 0)
            {
                System.out.println("Positive Number: " + num[i]);
                try
                {
                    Thread.sleep(1000);
                }
                catch(Exception e){}
            }
            else
            {
                int a = num[i];
                squareThread sThread = new squareThread(a);
                sThread.start();
                try
                {
                    Thread.sleep(1000);
                }
                catch(Exception e){}
            }
        }
    }
}

class squareThread extends Thread
{
    int number;

    squareThread(int randomNumber)
    {
        number = randomNumber;
    }
    public void run()
    {
        System.out.println("Negative Number: " + number);
    }
}


class learnthread
{
    public static void main(String args[])
    {
       randomNumber obj = new randomNumber();
       obj.start();
    }
}
