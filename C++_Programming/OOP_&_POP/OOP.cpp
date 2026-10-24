#include<iostream>
using namespace std;

class Arithmatic
{
    public:
        int No1;
        int No2;

        Arithmatic()
        {
            No1 = 0;
            No2 = 0;
        }
        Arithmatic(int i, int j)
        {
            No1 = i;
            No2 = j;
        }
};

int main()
{
    Arithmatic aobj1;
    Arithmatic aobj2(10,11);

    cout<<aobj1.No1<<"\n";
    cout<<aobj1.No2<<"\n";

    cout<<aobj2.No1<<"\n";
    cout<<aobj2.No2<<"\n";

    return 0;
}
