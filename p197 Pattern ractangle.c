#include<stdio.h>
main()
{
    int i,j,l,b;

    printf("\n Enter Length size=>");
    scanf("%d",&l);

    printf("\n Enter Breadth  size=>");
    scanf("%d",&b);


    for(i=1; i<=l; i++)
    {
        for(j=1; j<=b; j++)
        {
        printf("*");
        }
        printf("\n");
    }
}
