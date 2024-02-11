#include<stdio.h>
main()
{
    int a=20,b=20;
    int *ptra,*ptrb;

    ptra=&a;
    ptrb=&b;

    printf("\n a=%d",*ptra + *ptrb);
    printf("\n a=%d",*ptra - *ptrb);
    printf("\n a=%d",*ptra * *ptrb);
    printf("\n a=%d",*ptra / *ptrb);
}
