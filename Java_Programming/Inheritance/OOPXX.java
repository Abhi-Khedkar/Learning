class Arithmatic
{
    public int No1;
    public int No2;

    public Arithmatic()
    {
        this.No1 = 0;
        this.No2 = 0;
    }

    public Arithmatic(int i, int j)
    {
        this.No1 = i;
        this.No2 = j;
    }

    public int Addition()
    {
        int Ans = 0;
        Ans = this.No1 + this.No2;
        return Ans;
    }

    public int Substraction()
    {
        int Ans = 0;
        Ans = this.No1 - this.No2;
        return Ans;
    }
}

class OOPXX
{
    public static void main(String A[])
    {
        Arithmatic aobj1 = new Arithmatic(21, 10);

        int Result = 0;
        Result = aobj1.Addition();

        System.out.print("Addition is :"+ Result);

        Result = aobj1.Substraction();

        System.out.print("Substraction is :"+ Result);

    }
}