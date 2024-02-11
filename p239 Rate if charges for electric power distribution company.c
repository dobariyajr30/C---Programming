#include<stdio.h>
main()
{
   printf("\nConsumption Unit \tRate Of Charge");
   printf("\n0-200 \t\t         Rs 0.50 per unit");
   printf("\n201-400 \t\t Rs 100 Plus Rs 0.65 per unit excess of 200");
   printf("\n401-600 \t\t Rs 100 Plus Rs 0.80 per unit excess of 400");
   printf("\n601 and Above \t\t Rs 100 Plus Rs 1.00 per unit excess of 600");

   printf("\n****************************************************************************");


   //Calculations

   float ep;

   printf("\n Enter How many Electric Power Unit Have you consume=> ");
   scanf("%f",&ep);

   if(ep>=0 && ep<=200)
   {
       printf("\nYou'r Totla bill is %.2f",ep*0.50);
   }
   else if(ep<=201 && ep>=400)
   {
       printf("\nYou'r Totla bill is %.2f",(ep*0.65)+100);
   }
   else if(ep<=401 && ep>=600)
   {
       printf("\nYou'r Totla bill is %.2f",(ep*0.80)+230);
   }
   else
   {
       printf("\nYou'r Totla bill is %.2f",(ep*1.00)+390);
   }
}
