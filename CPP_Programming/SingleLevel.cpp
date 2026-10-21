#include<iostream>
using namespace std;

class Base
{
    public:
        int i, j;

        Base()
        {
            cout<<"Inside Base Constructor\n";
        }

        ~Base()
        {
            cout<<"Inside Base Destructor\n";
        }

        void fun()
        {
            cout<<"Inside Base Fun\n";
        }

        void gun()
        {
            cout<<"Inside Base Gun\n";
        }
};

class Derived : public Base
{
    public:   
        int x, y;

        Derived()
        {
            cout<<"Inside Derived Constructor\n";
        }

        ~Derived()
        {
            cout<<"Inside Derived Destructor\n";
        }

        void sun()
        {
            cout<<"Inside Derived Sun\n";
        }
};

int main()
{
    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";

    return 0;
}