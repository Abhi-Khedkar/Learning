#include<stdio.h>

int main()
{
    int std = 0;
    printf("Enter your Standard : ");
    scanf("%d", &std);
    switch(std)
    {
        case 1:
            printf("9.30AM");
            break;
        case 2:
            printf("10.30AM");
            break;
        case 3:
            printf("11.30AM");
            break;
        default:
            printf("Invalid");
    }
    return 0;
}