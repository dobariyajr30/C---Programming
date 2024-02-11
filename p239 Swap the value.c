#include<stdio.h>
main()
{
    int a,b,c;

    printf("\n Enter First Value=> ");
    scanf("%d",&a);

    printf("\n Enter Second Value=> ");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("\n Swap 1 %d",a);
    printf("\n Swap 2 %d",b);

}

