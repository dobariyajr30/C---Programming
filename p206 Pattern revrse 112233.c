#include<stdio.h>
main()
{
    int i,l,j;

    printf("\n Enter Limit=");
    scanf("%d",&l);

    for(i=1; i<=l; i++)
    {
        for(j=l; j>=i; j--)
        {
        printf("%d",i);
        }
        printf("\n");
    }
}

