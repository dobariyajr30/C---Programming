#include<stdio.h>
main()
{
    int j,i,c=0,no,x;

    printf("\n Enter Limit toll you have to check Prime Digit's=>");
    scanf("%d",&no);

    for(i=1; i<=no; i++)
    {
        x=i;
        c=0;
      for(j=2; j<=x/2; j++)
        {
            if(x%j==0)
            {
            c=1;
            break;
            }
        }
    if(c==0)
    {
        printf(" %d ",x);
    }
    }
}
