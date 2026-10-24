#include<stdio.h>

#pragma pack(1)
struct Demo
{
        int i;
        char c;
        float f;
        double d;
};

int main()
{
    struct Demo dobj1;
    struct Demo dobj2;

    struct Demo *dp=NULL;
    dp = &dobj2;

    //Indirect accessing operater
    dobj1.i=11;
    dobj1.c='A';
    dobj1.f=98.99;

    //Direct accessing operater
    dp->i=21;
    dp->c='B';
    dp->f=91.99;

    printf("%d\n",dobj1.i);
    printf("%d\n",dp->i);

    return 0;
}