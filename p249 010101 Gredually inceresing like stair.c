#include<stdio.h>
main()
{
  int i,j,l,k;

  printf("\n Enter Limit=>");
  scanf("%d",&l);

  k=1;

    for(i=l; i>=1; i--)
    {

        for(j=l; j>=i; j--)
        {
            if(k%2==0)
            {
            printf("0");
            }
            else
            {
                printf("1");
            }
            k++;

        }
        printf("\n");

    }
}
