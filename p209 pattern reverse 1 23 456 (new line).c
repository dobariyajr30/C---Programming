#include<stdio.h>
main()
{
   int i,l,j,k,m;

    printf("\n Enter Limit=>");
    scanf("%d",&l);

    k=1;
    m=j+96;

    for(i=l; i>=1; i--)
    {
        if(i%2==0)
        {
        for(j=l; j>=i; j--)
        {

            printf("%d",k);
            k++;
        }

        }
        else
        {
          for(j=1; j<=i; j++)
            {
              printf("%c",);
              m++;
            }
        }
        printf("\n");

    }
}
