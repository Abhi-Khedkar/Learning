#include<iostream>
using namespace std;

namespace Marvellous
{
    int i = 11;
    
    void Display()
    {
        cout<<"inside Display\n";
    }
}

int main()
{
    cout<<Marvellous::i<<"\n";

    Marvellous::Display();

    return 0;
}