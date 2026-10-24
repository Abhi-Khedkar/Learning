#include<iostream>
using namespace std;

class Demo
{
    public:
        int No1;
        int No2;
        static int X;

        Demo(int i, int j)
        {
            No1 = i;;
            No2 = j;
        }
        void Fun()
        {
            cout<<"Inside Fun\n";
            cout<<No1<<"\n";
            cout<<No2<<"\n";
            cout<<X<<"\n";
        }
        static void Gun()
        {
            cout<<"Inside Fun\n";
            cout<<X<<"\n";
        }
};

int Demo::X = 11;     

int main()
{
   cout<<Demo::X<<"\n";
   Demo::Gun();

    return 0;
}