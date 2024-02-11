#include<stdio.h>
main()
{
    int i,j,k,l;

    printf("\n Enter limit=>");
    scanf("%d",&l);

    for(i=1; i<=l; i++)
    {

        for(j=1; j<=l; j++)
        {
            if(j%2==0)
            {
                printf("0");
            }
            else
                {
                printf("1");
                }

        }
        printf("\n");
    }

}

