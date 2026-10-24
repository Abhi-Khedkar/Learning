#include<iostream>
using namespace std;

class PPA
{
    public:
        int no1;
        int no2;
        
        //Parameterised Constructor
        PPA()
        {
            cout<<"Inside Default Constructor\n";
        }
        
        PPA(int a, int b)
        {
            cout<<"Inside Parameterised Constructor\n";
        }

        ~PPA()
        {
            cout<<"Inside Destructor\n";
        }
};

int main()
{
    PPA pobj1;
    PPA pobj2(11, 21);


    return 0;
}