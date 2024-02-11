#include<stdio.h>

main()
{
   int n1,n2,max,step,lcm;

  printf("\n Enter First Value=> ");
  scanf("%d",&n1);

  printf("\n Enter Second Value=> ");
  scanf("%d",&n2);

   lcm=0;

   if(n1>n2)
      max=step=n1;
   else
      max=step=n2;

   while(1)
    {
      if(max%n1==0 && max%n2==0)
      {
         lcm = max;
         break;
      }
      max+=step;
   }
   printf("LCM is %d", lcm);
}

