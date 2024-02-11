#include<stdio.h>
main()
 {
   int i,j,l;
   char ch='a';

   printf("Enter Limit=>");
   scanf("%d",&l);

   for(i=1; i<=l; i++)
   {
       for(j=1; j<=i; j++)
       {
           if(i%2==0)
           {
               printf("%d",j);
           }
           else
           {
               printf("%c",ch);
               ch++;
           }
       }
       printf("\n");
   }
 }

