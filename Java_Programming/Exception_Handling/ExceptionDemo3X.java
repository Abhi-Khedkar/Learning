import java.util.*;

class Demo
{
    public static int Division(int no1, int no2) throws ArithmeticException
    {
        return no1/no2;
    }
}

class ExceptionDemo3X
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int no1=0, no2=0, ans=0;

        System.out.println("Enter first No : ");
        no1 = sobj.nextInt();

        System.out.println("Enter second No : ");
        no2 = sobj.nextInt();

        ans = Demo.Division(no1, no2);  // Exception prone code

        System.out.println("Division is : " +ans);
    }
}