#include<stdio.h>

int add(int a,int b)
{
    return a+b;
}
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
int cube(int a)
{
    return a*a;
}
main()
{
    int a,b,s,m,c;

    printf("\n Enter First Digit=> ");
    scanf("%d",&a);

    printf("\n Enter Second Digit=> ");
    scanf("%d",&b);


    s=add(a,b);
    m=max2(a,b);
    c=cube(a);

    printf("\n %d",s);
    printf("\n %d",m);
    printf("\n %d",c);

}
