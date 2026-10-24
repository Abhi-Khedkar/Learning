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
};

class DerivedX extends Derived
{
    public int a;

        public DerivedX()
        {
            System.out.println("Inside DerivedX Constructor");
        }

        public void run()
        {
            System.out.println("Inside DerivedX Run");
        }
}

class MultiLevel
{
    public static void main(String arg[])   
    {
        DerivedX dobj = new DerivedX();

        dobj.fun();
        dobj.gun();
        dobj.sun();
        dobj.run();
    }

}