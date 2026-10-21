class Base
{
    public int i, j;

    public Base()
    {
        System.out.println("Inside Base Constructor");
    }

    public void fun()
    {
        System.out.println("Inside Base Fun");
    }

    public void gun()
    {
        System.out.println("Inside Base Gun");
    }
}

class Derived extends Base
{
    public int x, y;

    public Derived()
    {
        System.out.println("Inside Derived Constructor");
    }

    public void sun()
    {
        System.out.println("Inside Derived Sun");
    }     
}

class SingleLevel
{
    public static void main(String A[])
    {
        Derived dobj = new Derived();
        dobj.fun();
        dobj.gun();
        dobj.sun();
    }
}