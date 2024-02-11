#include<stdio.h>
struct amazon
{
    int code,qty,price,total;
    char name[100];

};
main()
{
   struct amazon p[100];
   int i,l,c,prototal;
   int subtotal=0;

   printf("\n How many product have you purchased=>");
   scanf("%d",&l);

   for(i=1; i<=l; i++)
   {
       printf("\n Enter Product Code=>");
       scanf("%d",&p[i].code);

       fflush(stdin);
       printf("\n Enter product Name=>");
       gets(p[i].name);

       printf("\n what it's price=>");
       scanf("%d",&p[i].price);

       printf("\n How Much Have you purchase=>");
       scanf("%d",&p[i].qty);

   }

   printf("\n===================================================================");
   printf("\n Product Code \t Product name \t Product price \t Quantity \t Total ");

   for(i=1; i<=l; i++)
   {
       printf("\n %d \t %s \t %d \t %d \t %d",p[i].code,p[i].name,p[i].price,p[i].qty,p[i].price*p[i].qty);

   }


   for(i=1; i<=l; i++)
   {
       subtotal += p[i].price*p[i].qty;
   }
   printf("\n You'r total=> %d",subtotal);
}
