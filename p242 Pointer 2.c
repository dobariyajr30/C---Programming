#include<stdio.h>
main()
{
    int a=20;
    int *b;

    b=&a;

    printf("\n a=%d & a=%d",a,&a);
    printf("\n b=%d & b=%d *b=%d",b,&b,*b);

}
