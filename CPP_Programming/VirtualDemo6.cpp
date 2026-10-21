#include<iostream>
using namespace std;

#pragma pack(1)
class Base
{
    public:
        int i, j;
        void fun()  //1000
        { cout<<"Inside Base Fun\n"; }
        void gun()  //2000
        { cout<<"Inside Base Gun\n"; }
        virtual void sun()  //3000
        { cout<<"Inside Base Sun\n"; }
        virtual void run()  //4000
        { cout<<"Inside Base Run\n"; }
};  //16 Bytes

#pragma pack(1)
class Derived : public Base
{
    public:
        int x;
        void fun()  //5000
        { cout<<"Inside Derived Fun\n"; }
        void sun() //6000
        { cout<<"Inside Derived Sun\n"; }
        virtual void mun()  //7000
        { cout<<"Inside Derived Mun\n"; }
        void bun()  //8000
        { cout<<"Inside Derived Bun\n"; }
};  //20 Bytes

int main()
{
    Base *bp = new Derived();

    bp->fun();
    bp->gun();
    bp->sun();
    bp->run();
    //bp->mun();  //Error
    //bp->bun();  //Error

    return 0;
}