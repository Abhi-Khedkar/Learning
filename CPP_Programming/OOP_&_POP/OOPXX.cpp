#include<iostream>
using namespace std;

class Arithmatic
{
    public:
        int No1;
        int No2;

        Arithmatic()
        {
            this->No1 = 0;
            this->No2 = 0;
        }
        Arithmatic(int i, int j)
        {
            this->No1 = i;
            this->No2 = j;
        }

        //int Addition(Arithmatic *this)
        int Addition()
        {
            int Ans = 0;
            Ans = this->No1 + this->No2;
            return Ans;
        }

        //int Substraction(Arithmatic *this)
        int Substraction()
        {
            int Ans = 0;
            Ans = this->No1 - this->No2;
            return Ans;
        }
        
};

int main()
{
    Arithmatic aobj1(21,10);
    int Result = 0;

    //Result = Addition(&aobj1);
    Result = aobj1.Addition();

    cout<<"Addition is : "<<Result<<"\n";

    //Result = Substraction(&aobj1);
    Result = aobj1.Substraction();

    cout<<"Substraction is : "<<Result<<"\n";

    return 0;
}
