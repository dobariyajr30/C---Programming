#include<stdio.h>
main()
{
    int b,p,ans=1,i=0;

    printf("\n Enter base =>");
    scanf("%d",&b);

    printf("\n Enter Power=>");
    scanf("%d",&p);

    for(i=1; i<=p; i++)
    {
       ans=ans*b;
    }
    printf("\n Power of %d  to %d is=> %d",b,p,ans);
}
