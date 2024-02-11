#include<stdio.h>

void add(int n1,int n2)
{
    printf("\n Addition is=> %d",n1+n2);
}
void sub(int n1,int n2)
{
    printf("\n Subtraction is=> %d",n1-n2);
}
main()
{
    int n1,n2,c;

   do
   {
    printf("\n Enter 1st Number=> ");
    scanf("%d",&n1);

    printf("\n Enter 2nd Number=> ");
    scanf("%d",&n2);

    if(c%2==0)
    {

    add(n1,n2);
    }

    else
    {

    sub(n1,n2);

    }
    c++;
   }
   while(c!=5);
}
