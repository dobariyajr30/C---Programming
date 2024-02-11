#include<stdio.h>
main()
{
    int i,j,l,k;

    printf("\n Enter Value->");
    scanf("%d",&l);

    k=l;

    for(i=1; i<=l; i++)
    {
        for(j=1; j<=i; j++)
        {
          printf(" ");
        }
        for(j=l; j>=i; j--)
        {
            printf("%d",k);
        }
        k--;
        printf("\n");

    }

}
