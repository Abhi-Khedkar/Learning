#include<iostream>
using namespace std;

namespace Marvellous
{
    int i = 11;
    
    void Display()
    {
        cout<<"inside Display of marvellous\n";
    }
}

namespace PPA
{
    int i = 21;
    
    void Display()
    {
        cout<<"inside Display of PPA\n";
    }
}

int main()
{
    Marvellous::Display();
    PPA::Display();
    
    return 0;
}