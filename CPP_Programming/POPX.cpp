#include<iostream>
using namespace std;

int Addition(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    int Value1 = 0, Value2 = 0, Result = 0;

    cout<<"Enter First No :\n";
    cin>>Value1;

    cout<<"Enter Second No :\n";
    cin>>Value2;

    Result = Addition(Value1, Value2);

    cout<<"Addition is :"<<Result<<"\n";

    return 0;
}