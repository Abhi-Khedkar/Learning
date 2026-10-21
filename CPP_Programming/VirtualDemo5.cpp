#include<iostream>
using namespace std;

#pragma pack(1)
class Base
{
    public:
        int i, j;
        void fun()
        { cout<<"Inside Base Fun\n"; }
        void gun()
        { cout<<"Inside Base Gun\n"; }
        virtual void sun()
        { cout<<"Inside Base Sun\n"; }
        virtual void run()
        { cout<<"Inside Base Run\n"; }

};  //16 Bytes

#pragma pack(1)
class Derived : public Base
{
    public:
        int x;
        void fun()
        { cout<<"Inside Derived Fun\n"; }
        void sun()
        { cout<<"Inside Derived Sun\n"; }
        virtual void mun()
        { cout<<"Inside Derived Mun\n"; }
        void bun()
        { cout<<"Inside Derived Bun\n"; }
};  //20 Bytes

int main()
{
    Base *bp = new Derived();

    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";

    bp->fun();
    bp->gun();
    bp->sun();
    bp->run();
    //bp->mun();  //Error
    //bp->bun();  //Error

    return 0;
}