#include<stdio.h>
main()
{
    int n1,n2,c=0;
    char l;

    do
    {

       printf("\n Enter 1st No.=>");
       scanf("%d",&n1);

       printf("\n Enter 2nd No.=>");
       scanf("%d",&n2);

       printf("\n Addition of number=> %d",n1+n2);

       c++;

       fflush(stdin);
       printf("\n Do you wan't to add Number=>");
       scanf("%c",&l);

       }
       while(l!='n');

       printf("\n %d time you used this program",c);
}
