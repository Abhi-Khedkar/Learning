#include<iostream>
using namespace std;

class BaseA
{
    public:
        int i, j;

        BaseA()
        {
            cout<<"Inside BaseA Constructor\n";
        }

        ~BaseA()
        {
            cout<<"Inside BaseA Destructor\n";
        }

        void fun()
        {
            cout<<"Inside BaseA Fun\n";
        }
};

class BaseB
{
    public:
        int x, y;

        BaseB()
        {
            cout<<"Inside BaseB Constructor\n";
        }

        ~BaseB()
        {
            cout<<"Inside BaseB Destructor\n";
        }

        void gun()
        {
            cout<<"Inside BaseB Gun\n";
        }
};

class Derived : public BaseB, public BaseA
{
    public:
        int a;

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
    Derived dobj;

    dobj.fun();
    dobj.gun();
    dobj.sun();

    return 0;
}