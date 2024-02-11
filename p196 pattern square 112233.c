#include<stdio.h>
main()
{
    int i,l,j;

    printf("\n Enter Limit=");
    scanf("%d",&l);

    for(i=1; i<=l; i++)
    {
        for(j=1; j<=l; j++)
        {
        printf("%d",j);
        }
        printf("\n");
    }

}
