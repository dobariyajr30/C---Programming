#include<stdio.h>
main()
{
    int i,j,l;
     printf("\n Enter Limit=>");
     scanf("%d",&l);

     for(i=1; i<=l; i++)
     {
         for(j=1; j<=i; j++)
         {
          if(j%2==0)
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
