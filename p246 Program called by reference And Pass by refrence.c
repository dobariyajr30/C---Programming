#include<stdio.h>>

void swap(int *x,int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
}
main()
{
    int a=20,b=2;

    swap(&a,&b);

    printf("a=%d b=%d",a,b);
}
