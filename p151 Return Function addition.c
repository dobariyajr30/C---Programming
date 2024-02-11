#include<stdio.h>
int  add(int a,int b)
{
    return a+b;
}
main()
{
    int a,b,s;

     printf("\n Enter First Digit=> ");
    scanf("%d",&a);

    printf("\n Enter Second Digit=> ");
    scanf("%d",&b);


    s=add(a,b);

    printf("\n %d",s);
}
