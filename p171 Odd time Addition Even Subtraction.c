#include<stdio.h>
main()
{
    int n1,n2,c=0,a;
    char l;

    do
    {

        if(c%2==0)
        {
       printf("\n Enter 1st No.=>");
       scanf("%d",&n1);

       printf("\n Enter 2nd No.=>");
       scanf("%d",&n2);

       printf("\n Addition of number=> %d",n1+n2);
        }
        else
        {
       printf("\n Enter 1st No.=>");
       scanf("%d",&n1);

       printf("\n Enter 2nd No.=>");
       scanf("%d",&n2);

       printf("\n subtraction of number=> %d",n1-n2);

        }

        c++;
       }
       while(l!='n');
        printf("\n %d time you used this program",c);

}
