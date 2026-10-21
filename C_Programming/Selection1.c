#include<stdio.h>

int main()
{
    int std = 0;
    printf("Enter your Standard : ");
    scanf("%d", &std);
    if(std == 1)
    {
        printf("9.30AM");
    }
    else if(std == 2)
    {
        printf("10.30AM");
    }
    else if(std == 3)
    {
        printf("11.30AM");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}