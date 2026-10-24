#include<stdio.h>

struct Struct Demo
{
        int i;
        char c;
        float f;
        double d;
};

int main()
{
    printf("%d\n",sizeof(Struct Demo));

    return 0;
}