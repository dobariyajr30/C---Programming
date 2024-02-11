#include<stdio.h>

main()
{
   int n1,n2,i,hcf;

   printf("\n Enter 1st Digit=>");
   scanf("%d",&n1);

   printf("\n Enter 2nd Digit=>");
   scanf("%d",&n2);

   for(i=1; i<=n1 || i<=n2; i++)
    {
         if(n1%i==0 && n2%i==0)
         hcf = i;
    }

   printf("HCF = %d", hcf);

}
