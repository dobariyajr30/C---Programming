#include<stdio.h>
int max2(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
main()
{
    int c;

    c=max2(22,33);

    printf("\n m= %d",c);
}
