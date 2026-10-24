#include<stdio.h>

void Addition(int no1, int no2)
{
    int Result = 0;
    Result = no1 + no2;  //Business Logic
    printf("Addition is: %d\n",Result);
}

int main()
{
    int value1 = 0, value2 = 0;

    printf("Enter First No:\n");
    scanf("%d",&value1);

    printf("Enter Second No:\n");
    scanf("%d",&value2);

    Addition(value1, value2);
    
    return 0;
}