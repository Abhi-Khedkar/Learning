class Demo extends Thread
{
    public void run()
    {
        System.out.println("Thread is running...");
    }
}

class ThreadDemo6
{
    public static void main(String A[]) throws Exception
    {
        System.out.println("Inside main Thread");

        Demo dobj1 = new Demo("First_Thread");
        Demo dobj2 = new Demo("Second_Thread");
        
        dobj1.setName("First_Thread");
        dobj2.setName("Second_Thread");

        dobj1.start();
        dobj2.start();

        dobj1.join();
        dobj2.join();
        System.out.println("End of main Thread");  // Issue
    }
}