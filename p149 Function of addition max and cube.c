#include<stdio.h>

void sum(int n1,int n2)
{
    printf("\n Addition is %d",n1+n2);
}

void max2(int n1,int n2)
{
    if(n1>n2)
    {
        printf("\n 1st one Bigger");
    }
    else if(n1<n2)
    {
        printf("\n 2nd one Bigger");
    }
    else
    {
        printf("\n Both Are equal");
    }
}
void cube(int n1,int i)
{
    for(i=1; i<=n1; i++)
    {
        printf("\n %d",i*i*i);
    }

}
main()
{
    int n1,n2,i;

    printf("\n Enter First Digit=> ");
    scanf("%d",&n1);

    printf("\n Enter Second Digit=> ");
    scanf("%d",&n2);

    sum(n1,n2);
    max2(n1,n2);
    cube(n1,i);

}
