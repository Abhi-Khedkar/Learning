#include<iostream>
using namespace std;

class PPA
{
    public:
        int no1;
        int no2;
        
        //(Default, Parameterised, Copy) Constructors
        PPA()  //Default Constructor
        {
            cout<<"Inside Default Constructor\n";
        }
        
        PPA(int a, int b)   //Parameterised Constructor
        {
            cout<<"Inside Parameterised Constructor\n";
        }

        PPA(PPA &obj)   //Copy Constructor
        {
            cout<<"Inside Copy Constructor\n";
        }

        ~PPA()
        {
            cout<<"Inside Destructor\n";
        }
};

int main()
{
    PPA pobj1;           //Defult
    PPA pobj2(11, 21);   //Parameterised
    PPA pobj3(pobj1);    //Copy

    return 0;
}