#include<stdio.h>
main()
{
    int i,j,l;

    printf("\nEnter Limit=>");
    scanf("%d",&l);

    for(i=1; i<=l; i++)
    {
        for(j=l; j>=i; j--)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=1; i<=l; i++)
    {
        for(j=1; j>=i; j--)
        {
            printf(" ");
        }
        for(j=1; j<=l; j++)
        {
            printf("* ");
        }
        printf("\n");
    }


}
