#include<stdio.h>
main()
{
    int i,j,l;

    printf("\n Enter limit=>");
    scanf("%d",&l);

    for(i=1; i<=l; i++)
    {
        for(j=1; j<=l; j++)
        {
        if(i%2==0)
        {
            printf("1");
        }
        else
        {
           printf("0");
        }
        }
         printf("\n");
        }

    }
