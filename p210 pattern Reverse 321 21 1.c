#include<stdio.h>
main()
{
   int i,l,j,k;

    printf("\n Enter Limit=>");
    scanf("%d",&l);

    for(i=l; i>=1; i--)
    {
        for(j=l; j>=i; j--)
        {

            printf("%d",j);

        }
        k=1;
        printf("\n");

    }
}
